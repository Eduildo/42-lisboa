/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:39:46 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/15 22:22:39 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        n = -n;
        ft_putchar_fd('-', fd);
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
        ft_putchar_fd(n + 48, fd);
}
/*int main()
{
    int num = 15474957;
    int fd = STDOUT_FILENO;

    ft_putnbr_fd(num, fd);
    ft_putchar_fd('\n', fd);

    return 0;
}*/