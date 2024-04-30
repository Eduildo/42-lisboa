/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:15:01 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 19:48:44 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    if (!s)
        return (NULL);

    if (len > ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);

    str = ft_calloc(len + 1, sizeof(char));

    if (!str)
        return (NULL);
    i = 0;

    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return (str);
}

int main()
{
    const char *original = "Hello, world!";
    char *substring;

    // Chama a função ft_substr para criar uma substring
    substring = ft_substr(original, 7, 5); // Começando do índice 7, pegando os próximos 5 caracteres

    if (substring == NULL)
    {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    // Imprime a substring
    printf("Substring: %s\n", substring);

    // Libera a memória alocada
    free(substring);

    return 0;
}