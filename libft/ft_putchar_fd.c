/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihzhang <yihzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:10:10 by yihzhang          #+#    #+#             */
/*   Updated: 2025/11/16 16:31:28 by yihzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*#include <fcntl.h>
int main(void)
{
    // Test 1: Output to standard output (terminal)
    ft_putchar_fd('A', 1); // Should print 'A' to the terminal
    ft_putchar_fd('\n', 1);

    // Test 2: Output to standard error
    ft_putchar_fd('B', 2); // Should print 'B' to the terminal (stderr)
    ft_putchar_fd('\n', 2);

    // Test 3: Output to a file
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("can't open");
        return (1);
    }
    ft_putchar_fd('yihuan', fd); // Should write 'C' to test_output.txt
    close(fd);

    return 0;
}*/