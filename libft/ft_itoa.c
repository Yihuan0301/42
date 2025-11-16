/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:46:00 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/14 23:01:16 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int ln)
{
	int	len;

	len = 0;
	if (ln <= 0)
	{
		ln = -ln;
		len = 1;
	}
	while (ln)
	{
		ln /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			int_len;
	char		*s;
	long int	ln;

	ln = n;
	int_len = ft_intlen(ln);
	s = (char *)malloc(sizeof(char) * (int_len + 1));
	if (!s)
		return (NULL);
	if (ln < 0)
		ln = -ln;
	s[int_len] = '\0';
	while (--int_len)
	{
		s[int_len] = ln % 10 + '0';
		ln /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

/*#include "stdio.h"
int	main(void)
{
	int i = -2147483648;
	char *s = ft_itoa(i);
	printf("%s", s);
	return (0);
}

123 % 10 =3
12 % 10 = 2
1 % 10 = 1*/