/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:24:19 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/13 14:52:48 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_strlcat(ret, s1, len + 1);
	ft_strlcat(ret, s2, len + 1);
	return (ret);
}