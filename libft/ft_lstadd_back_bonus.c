/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:57:51 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/17 23:44:32 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

/*int	main()
{
	int	a = 10, b = 20;
	t_list node1, new;
	t_list *last;
	t_list *head = &node1;
	t_list **lst = &head;
	node1.content = &a;
	node1.next = NULL;
	new.content = &b;
	new.next = NULL;
	ft_lstadd_back(lst, &new);
	last = ft_lstlast(*lst);
	printf("last.content %d", *(int *)(last->content));
}*/