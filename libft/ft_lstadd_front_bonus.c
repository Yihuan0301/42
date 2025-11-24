/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:39:14 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/17 23:47:19 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	int	a = 10, b = 20;
	t_list node1, node2;
	t_list *head = NULL;

	node1.content = &a;
	node1.next = NULL;
	node2.content = &b;
	node2.next = NULL;

	ft_lstadd_front(&head, &node1);
	ft_lstadd_front(&head, &node2);
	t_list *tmp = head;
	while (tmp)
	{
		printf("%d\n", *(int *)(tmp->content));
		tmp = tmp->next;
	}
	return 0;
}*/
