/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:54:14 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:43:32 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

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

/*int main()
{
    const char *haystack = "hello world";
    const char *needle = "hello";
    char *result = ft_strnstr(haystack, needle, ft_strlen(haystack)); // O terceiro argumento é o tamanho de haystack

    if (result != NULL)
        printf("Substring encontrada: %s\n", result);
    else
        printf("Substring não encontrada.\n");

    return 0;
}*/