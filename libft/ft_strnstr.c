/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:18:50 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/12 16:23:35 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*searching only the first len characters.
char *haystack = "Hello World 42";
//                012345678910
strnstr(haystack, "World", 11);  // nurns pointer to "World 42" ✅
strnstr(haystack, "World", 8);   // nurns NULL (only searches "Hello Wo") ❌
strnstr(haystack, "World", 5);   // nurns NULL (only searches "Hello") ❌
strnstr(haystack, "", 11);       // nurns pointer to "Hello World" ✅*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s",ft_strnstr("hel lo world 42", "l l", 5));
	return (0);
}*/