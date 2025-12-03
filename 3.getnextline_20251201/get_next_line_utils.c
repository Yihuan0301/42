/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:26:44 by yihzhang          #+#    #+#             */
/*   Updated: 2025/12/03 14:58:35 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*ft_lastnode(t_list *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	ft_lstadd_back(t_list **list, char *buf)
{
	t_list	*last_node;
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!list || !buf || !new_node)
		return ;
	new_node->content = buf;
	new_node->next = NULL;
	if (*list == NULL)
		*list = new_node;
	else
	{
		last_node = ft_lastnode (*list);
		last_node->next = new_node;
	}
}

int	ft_found_newline(t_list *list)
{
	ssize_t	i;

	while (list)
	{
		i = 0;
		while (i < BUFFER_SIZE && list->content[i])
		{
			if (list->content[i] == '\n')
				return (1);
			i++;
		}
		list = list->next;
	}
	return (0);
}

int	ft_get_linelen(t_list *list)
{
	ssize_t	i;
	ssize_t	str_len;

	if (!list)
		return (0);
	str_len = 0;
	while (list)
	{
		i = 0;
		while (list->content[i])
		{
			if (list->content[i] == '\n')
			{
				str_len++;
				return (str_len);
			}
			i++;
			str_len++;
		}
		list = list->next;
	}
	return (str_len);
}

void	ft_free(t_list **list, t_list *clean_node, char *buf)
{
	t_list	*temp;

	if (*list == NULL)
		return ;
	while (*list)
	{
		temp = (*list)->next;
		free((*list)->content);
		free(*list);
		*list = temp;
	}
	*list = NULL;
	if (clean_node)
	{	
		if (clean_node->content[0])
			*list = clean_node;
		else
		{
			free(buf);
			free(clean_node);
		}
	}
}
