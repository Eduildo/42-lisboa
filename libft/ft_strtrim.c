/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:35:38 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/01 02:56:22 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int start;
    int end;
    int i;

    i = 0;

    if (!s1 || !set)
        return NULL;
    while (s1[start] && ft_strchr(set, s1[start]))
        i++;
    end = ft_strlen(s1) - 1;
    while (end > start && ft_strchr(set, set[end]))
        j--;
    result = (char *)malloc(end - start + 2) * sizeof(char);
    if (!result)
        return (NULL);
    i = 0;
    while (start <= end)
        result[i++] = s1[start++];
    result[i] = 0;

    return (result);
}