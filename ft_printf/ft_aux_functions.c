/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:05:02 by edlima            #+#    #+#             */
/*   Updated: 2024/06/22 12:05:30 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Função auxiliar para imprimir um caractere
int ft_putchar(char c)
{
    return write(1, &c, 1);
}

// Função auxiliar para imprimir uma string
int ft_putstr(const char *s)
{
    int count = 0;
    while (*s)
    {
        count += ft_putchar(*s++);
    }
    return count;
}

// Função auxiliar para imprimir um inteiro
int ft_putnbr(int n)
{
    int count = 0;
    if (n == -2147483648)
    {
        count += ft_putstr("-2147483648");
        return count;
    }
    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        count += ft_putnbr(n / 10);
    }
    count += ft_putchar((n % 10) + '0');
    return count;
}
