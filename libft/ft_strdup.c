/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:16:00 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/13 17:24:41 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t i;

    dest = (char *)malloc(ft_strlen(s1) + 1);
    i = 0;
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

/*int main()
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
}*/