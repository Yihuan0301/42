/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:10:21 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/28 22:47:40 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 9999
# endif

# include <fcntl.h>      // open, O_RDONLY, O_CREAT, O_TRUNC, ...
# include <unistd.h>     // read, write, close
# include <stdio.h>   //printf
# include <stdlib.h>  //malloc

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lastnode(t_list *list);
void	ft_lstadd_back(t_list **list, char *buf);
int		ft_found_newline(t_list *list);
void	create_list(t_list	**list, int fd);
int		ft_get_linelen(t_list *list);
char	*list_to_line(t_list *list);
void	ft_free(t_list **list, t_list *clean_node, char *buf);
void	initialize_list(t_list **list);
char	*get_next_line(int fd);

#endif