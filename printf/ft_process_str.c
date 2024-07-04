/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:01:50 by edlima            #+#    #+#             */
/*   Updated: 2024/07/04 17:03:54 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int process_str(va_list args)
{
    const char *str;

    str = va_arg(args, const char);
    return (ft_putstr(str));
}