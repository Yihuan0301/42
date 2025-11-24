/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:32:03 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/17 13:10:13 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	write (fd, s, len);
}

/*#include <fcntl.h>
int	main(void)
{
	int	fd = open("test_putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
	ft_putstr_fd("hello", 1);
	ft_putstr_fd("yihuan", 2);
	ft_putstr_fd("Bonjour Yihuan", fd);
}*/