/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:18:25 by edlima            #+#    #+#             */
/*   Updated: 2024/07/04 17:25:52 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int process_ptr(va_list args)
{
    unsigned long long p;

    p = va_arg(args, unsigned long long);
    if (p == 0)
        return (ft_putstr("(nil)"));
    return (ft_putstr("0x") + ft_putnbr_hex(p, 0));
}