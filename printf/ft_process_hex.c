/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:08:31 by edlima            #+#    #+#             */
/*   Updated: 2024/07/04 17:15:11 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_process_hex(const char *str, va_list args)
{
    unsigned int i;

    i = va_arg(args, unsigned int);
    if (*str == 'x')
        return (ft_putnbr_hex(i, 0));
    else
        return (ft_putnbr_hex(i, 1));
}