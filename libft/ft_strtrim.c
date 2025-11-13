/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:57:52 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/13 20:48:46 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char	*ret;
	size_t		i;
	size_t		j;

	len = ft_strlen(s1);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, sizeof(s1));
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == set[j])
			j++;
		if (set[j] == '\0')
		{
			ret = ft_memmove(&ret[i], &ret[i + j],len - i -j + 1);
			return (ret);
		}
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	char	*ret;
	ret = ft_strtrim("hello world", "wor");
	printf ("%s", ret);
	return (0);
}