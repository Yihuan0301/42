/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:38:52 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/14 21:14:18 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memcpy(d, s, n);
	else
		while (n--)
			*(d + n) = *(s + n);
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "Hello World";
	ft_memmove(str + 6, str, ft_strlen(str + 6) + 1);
	printf("%s", str);
}*/