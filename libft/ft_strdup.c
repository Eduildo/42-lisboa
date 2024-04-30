/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:16:00 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 16:27:06 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t i;

    dest = (char *)malloc(ft_strlen(s1) + 1);

    if (!dest)
        return (NULL);
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    const char *original = "Hello, world!";
    char *copia;
    copia = ft_strdup(original);

    if (copia == NULL)
    {
        printf("Falha ao alocar memória.\n");
        return 1;
    }
    printf("Original: %s\n", original);
    printf("Cópia: %s\n", copia);

    free(copia);

    return 0;
}