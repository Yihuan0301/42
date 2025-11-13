/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 22:58:04 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/13 18:25:41 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
Cast void *s to unsigned char *p (to work byte-by-byte)
Loop n times
Set each byte to (unsigned char)c
Return original pointer

Real-World Uses:
✅ Initialize arrays/buffers to zero
✅ Clear sensitive data (passwords, keys)
✅ Fill graphics buffers with color
✅ Initialize structures

#include <stdio.h>
int	main(void)
{
	char str1[3];
	int arr[3];
	int	i;

	ft_memset(str1, 'a', sizeof(str1));
	printf("ft_memset: str1: %s\n", str1);

	ft_memset(arr, 0, sizeof(arr));
	i = 0;
	while (i < 3)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}*/
