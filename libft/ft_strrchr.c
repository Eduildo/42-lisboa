/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:39:03 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:44:05 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char *res;
    char cc;

    cc = (char)c;

    res = NULL;
    i = 0;

    while (s[i])
    {
        if (s[i] == cc)
            res = (char *)&s[i];
        i++;
    }

    if (s[i] == cc)
        res = (char *)&s[i];
    i++;

    return (res);
}