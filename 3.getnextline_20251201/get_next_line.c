/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:39:59 by yihzhang          #+#    #+#             */
/*   Updated: 2025/12/01 22:51:17 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	create_list(t_list	**list, int fd)
{
	ssize_t		char_read;
	char		*buf;

	while (!ft_found_newline(*list))
	{
		buf = malloc(BUFFER_SIZE + 1);
		if (!buf)
			return ;
		char_read = read(fd, buf, BUFFER_SIZE);
		if (char_read < 0)
		{
			free(buf);
			ft_free(list, NULL, NULL);
			return ;
		}
		if (char_read == 0)
		{
			free(buf);
			return ;
		}
		buf[char_read] = '\0';
		ft_lstadd_back(list, buf);
	}
}

char	*list_to_line(t_list *list)
{
	char		*next_str;
	ssize_t		pos;
	ssize_t		j;

	next_str = malloc(ft_get_linelen(list) + 1);
	if (!next_str)
		return (NULL);
	pos = 0;
	while (list)
	{
		j = 0;
		while (list->content[j])
		{
			next_str[pos++] = list->content[j];
			if (list->content[j] == '\n')
			{
				next_str[pos] = '\0';
				return (next_str);
			}
			j++;
		}
		list = list->next;
	}
	next_str[pos] = '\0';
	return (next_str);
}

void	initialize_list(t_list **list)
{
	char		*buf;
	t_list		*inode;
	t_list		*last_node;
	ssize_t		i;
	ssize_t		j;

	if (!list || !*list)
		return ;
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return ;
	inode = malloc(sizeof(t_list));
	if (!inode)
		return (free(buf));
	last_node = ft_lastnode(*list);
	i = 0;
	while (last_node->content[i] && last_node->content[i] != '\n')
		i++;
	if (last_node->content[i] == '\n')
		i++;
	j = 0;
	while (last_node->content[i])
		buf[j++] = last_node->content[i++];
	buf[j] = '\0';
	return(inode->content = buf, inode->next = NULL, ft_free(list, inode, buf));
}

char	*get_next_line(int fd)
{
	static t_list	*list = NULL;
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	create_list(&list, fd);
	if (!list)
		return (NULL);
	next_line = list_to_line(list);
	initialize_list(&list);
	return (next_line);
}

// int	main(void)
// {
// 	int		fd = open("test1.txt", O_RDONLY);
// 	char	*line;

// 	if (fd < 0)
// 	{
// 		perror("open");
// 		return (1);
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("call-> %s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }
