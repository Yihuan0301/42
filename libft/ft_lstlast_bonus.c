/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:39:50 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/17 17:23:51 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	int	a = 10, b = 20, c = 30;
	t_list node1, node2, node3;
	t_list *lst;
	t_list *ret;
	node1.content = &a;
	node1.next = NULL;
	node2.content = &b;
	node2.next = &node1;
	node3.content = &c;
	node3.next = &node2;
	lst = &node3;
	ret = ft_lstlast(lst);
	printf("last.content %d", *(int *)(ret->content));
}*/