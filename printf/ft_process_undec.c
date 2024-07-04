/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_undec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:54:31 by edlima            #+#    #+#             */
/*   Updated: 2024/07/04 16:57:52 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_process_undec(va_list args)
{
    unsigned int i;

    i = va_arg(args, unsigned int);
    return (ft_putnber_unsigned(i));
}