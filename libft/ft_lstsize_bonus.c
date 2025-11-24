/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:22:46 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/17 16:38:52 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*int	main(void)
{
	int	a = 10, b = 20;
	t_list node1, node2;
	t_list *lst;
	int	size;
	
	node1.content = &a;
	node1.next = NULL;
	node2.content = &b;
	node2.next = &node1;
	lst = &node2;
	size = ft_lstsize(lst);
	printf("List size: %d\n", size);
	return (0);
}*/