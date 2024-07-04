/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:15:51 by edlima            #+#    #+#             */
/*   Updated: 2024/07/04 17:18:09 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_process_dec(va_list args)
{
    int d;

    d = va_arg(args, int);
    return (ft_putnbr(d));
}