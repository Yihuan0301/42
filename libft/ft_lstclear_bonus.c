/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:37:17 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/17 18:01:01 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}

/*void	del_int(void *content)
{
	(void)content;
}

int	main(void)
{
	int	a = 10, b = 20;
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *head = node2;

	node1->content = &a;
	node1->next = NULL;
	node2->content = &b;
	node2->next = node1;
	ft_lstclear(&head, del_int);
    if (head == NULL)
        printf("List cleared!\n");
    else
        printf("List not cleared!\n");
    return 0;
}*/