/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 19:49:41 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/13 14:31:46 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
int	main(void)
{
	char	src[] = "world";
	char	dest[50] = "hello ";
	size_t	ret;
	size_t	size = 6;

	ret = ft_strlcat(dest, src, size);
	printf("new_dest:%s, dest_len:%zu", dest, ret);
	return (0);
}
/*only care about first (size) bytes, don't scan beyond the size
safely appends one string to another with size limit
but ensures:
1. Total length doesn't exceed size-1
2. Result is always null-terminated
3. Returns total length it tried to create
4. the third parameter is the buffer size(capacity).not the desired string length
*/