/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:41:32 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/12 18:39:36 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char *p = ft_calloc(4, 2);
	printf("%s", p);
	return (0);
}*/
/*count:how many, size:how big is each
Call	      count	  size	Total_Bytes	Memory Layout
calloc(5, 4)	5	    4	20	         int:  [4B][4B][4B][4B][4B]
calloc(10, 1)	10  	1	10	         char: [1B][1B][1B][1B][1B][1B][1B][1B][1B][1B]
calloc(3, 8)	3	    8	24	         point:[8B][8B][8B]
calloc(4, 2)	4   	2	8	         [2B][2B][2B][2B]
*/