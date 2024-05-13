/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:54:14 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/13 19:28:27 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include "ft_strlen.c"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if (!haystack || !needle || len == 0)
        return (NULL);
    if (needle[0] == 0)
        return ((char *)haystack);

    while (haystack[i] && i < len)
    {
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            j++;
            if (needle[j] == 0)
                return ((char *)haystack + i);
        }
        i++;
        j = 0;
    }

    return (0);
}

int main()
{
    const char *haystack = NULL;
    const char *needle = ;
    char *result = ft_strnstr(haystack, needle, ft_strlen(haystack)); // O terceiro argumento é o tamanho de haystack

    if (result != NULL)
        printf("Substring encontrada: %s\n", result);
    else
        printf("Substring não encontrada.\n");

    return 0;
}