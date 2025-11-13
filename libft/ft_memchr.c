/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:44:58 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/13 20:27:16 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*p;
	
	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

/*
// Searches first n bytes of s for byte c
// Returns pointer to the byte, or NULL if not found
#include <stdio.h>
int	main(void)
{
	char	s[] = "hello";
	char	*result1 = ft_memchr(s, 'l', 2);
	char	*result2 = ft_memchr(s, 'l', 3);
    if (result1)
        printf("result1: %s\n", result1);
    else
        printf("result1: Not found (NULL)\n");
    
    if (result2)
        printf("result2: %s\n", result2);
    else
        printf("result2: Not found (NULL)\n");
	return (0);	
}*/