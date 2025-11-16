/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:34:50 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/14 21:34:11 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		word_len;

	arr = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		word_len = ft_word_len(s + i, c);
		arr[j] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!arr[j])
			return (NULL);
		ft_strlcpy(arr[j++], s + i, word_len + 1);
		i = i + word_len;
	}
	arr[j] = NULL;
	return (arr);
}

/*#include <stdio.h>
int	main(void)
{
	char const *s1 = "  hi  ho w    are  you ";
	char **arr = ft_split(s1, ' ');
	int	i = 0;
	printf("test t_count_words:%d\n", ft_count_words(s1, ' '));
	while (i < ft_count_words(s1, ' '))
	{
		printf("%s\n", arr[i]);
		i++;
	}
	i = 0;
    while (arr[i])  // Free each string
    {
        free(arr[i]);
        i++;
    }
    free(arr);  // Free the array itself
	return (0);
}*/
/*size_t	ft_strlcpy(arr[j], s + i, len)
"hi  how are", " "
 0123456789
 len = 10
 start = 0
 end = 9
 s[len] = '\0'
 */