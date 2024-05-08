/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:35:38 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/08 15:56:16 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include "ft_strchr.c"
#include "ft_strlen.c"

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int start = 0;
    int end;
    int i = 0;

    if (!s1 || !set)
        return NULL;

    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1) - 1;
    while (end > start && ft_strchr(set, s1[end]))
        end--;

    result = (char *)malloc((end - start + 2) * sizeof(char));
    if (!result)
        return NULL;

    while (start <= end)
        result[i++] = s1[start++];

    result[i] = '\0';
    return (result);
}

int main()
{
    const char *s1 = "loHello, World!lo";
    const char *set = "lo";

    char *trimmed = ft_strtrim(s1, set);

    if (trimmed != NULL)
    {
        printf("String original: '%s'\n", s1);
        printf("String depois do trim: '%s'\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Erro ao trimar a string\n");
    }

    return 0;
}