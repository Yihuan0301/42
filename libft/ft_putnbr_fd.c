/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:14:54 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/17 13:30:27 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;

	ln = n;
	if (n < 0)
	{
		ln = -ln;
		write (fd, "-", 1);
	}
	if (ln >= 10)
		ft_putnbr_fd(ln / 10, fd);
	ft_putchar_fd((ln % 10) + '0', fd);
}

/*int main(void)
{
    // Test 1: Positive number to stdout
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    // Test 2: Negative number to stdout
    ft_putnbr_fd(-6789, 1);
    ft_putchar_fd('\n', 1);

    // Test 3: Zero to stdout
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);

    // Test 4: INT_MIN and INT_MAX to stdout
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(2147483647, 1);
    ft_putchar_fd('\n', 1);

    // Test 5: Output to a file
    int fd = open("test_putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)

int main(void)
{
    // Test 1: Positive number to stdout
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    // Test 2: Negative number to stdout
    ft_putnbr_fd(-6789, 1);
    ft_putchar_fd('\n', 1);

    // Test 3: Zero to stdout
    ft_putnbr_fd(0, 1);
 
    {
        perror("open");

int main(void)
{
    // Test 1: Positive number to stdout
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    // Test 2: Negative number to stdout
    ft_putnbr_fd(-6789, 1);
    ft_putchar_fd('\n', 1);

    // Test 3: Zero to stdout
    ft_putnbr_fd(0, 1);
 
        return (1);
    }
    ft_putnbr_fd(424242, fd);
    ft_putchar_fd('\n', fd);
    close(fd);

    return 0;
}*/
