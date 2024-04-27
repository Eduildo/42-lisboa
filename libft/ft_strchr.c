/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:29:54 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/27 02:36:16 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    unsigned int i;
    char cc;
    cc = (char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == cc)
            return ((char *)&s[i]);
        i++;
    }

    if (s[i] == cc)
        return ((char *)&s[i]);

    return (NULL);
}