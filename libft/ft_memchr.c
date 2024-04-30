/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:16:22 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:32:47 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t len)
{
    unsigned char *str;
    size_t len i;
    unsigned char uc;

    str = (unsigned char *)s;
    uc(unsigned char);
    i = 0;
    while (i < len)
    {
        if (str[i] == uc)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}