/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:28:35 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/13 18:56:18 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	dest[10] = "hello";
	char	src[7] = "yi";
	char	*test;
	int	i = 0;
	test = ft_memcpy(dest, src, 1);
	while (i < 10)
	{
		printf("%c", test[i]);
		i++;
	}
	return (0);
}

/*
Searches first n bytes of s for byte c
Returns pointer to the byte, or NULL if not found
⚡ Fast - optimized for speed
⚠️ No overlap - buffers must not overlap (use memmove for that)
✅ Binary safe - copies exact bytes including '\0'

Real-World Uses:
✅ Copy structures
✅ Buffer management (file I/O, network)
✅ Image/audio data copying
✅ Serialization/deserialization
*/
