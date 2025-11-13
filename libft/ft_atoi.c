/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:24:39 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/12 16:40:36 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	ret;
	int	sign;

	i = 0;
	ret = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return (sign * ret);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("   -42ooo"));
	return (0);
}*/
/*atoi("123")       → 123
atoi("-456")      → -456
atoi("+789")      → 789
atoi("0")         → 0
atoi("   42")     → 42  (skips leading spaces)
atoi("42abc")     → 42  (stops at non-digit)
atoi("abc")       → 0   (no valid number)*/

