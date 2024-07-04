/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:04:25 by edlima            #+#    #+#             */
/*   Updated: 2024/06/22 17:05:16 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_aux_functions.c"

int ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);
    int count = 0;

    while (*str)
    {
        if (*str == '%' && *(str + 1))
        {
            str++;
            if (*str == 'd')
            {
                int i = va_arg(args, int);
                count += ft_putnbr(i);
            }
            else if (*str == 's')
            {
                const char *s = va_arg(args, const char *);
                count += ft_putstr(s);
            }
            else if (*str == 'c')
            {
                char c = (char)va_arg(args, int);
                count += ft_putchar(c);
            }
            else
            {
                count += ft_putchar('%');
                count += ft_putchar(*str);
            }
        }
        else
        {
            count += ft_putchar(*str);
        }
        str++;
    }

    va_end(args);
    return count;
}
int main()
{
    ft_printf("Hello %s! The number is %d and char is %c\n", "world", 42, 'A');
    return 0;
}