/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:47:46 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/16 15:09:43 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*static void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
}

#include "stdio.h"

int	main(void)
{
	char s[] = "hello";
	printf ("%s\n", s);
	ft_striteri(s, to_upper);
	printf ("%s\n", s);
	return (0);
}*/