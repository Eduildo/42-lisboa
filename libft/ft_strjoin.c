/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:00:47 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 20:20:56 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *resp;
    int i;
    int j;

    i = 0;
    j = 0;

    resp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));

    if (!resp)
        return (NULL);
    while (s1[i])
        resp[j++] = s1[i++];
    i = 0;

    while (s2[i])
        resp[j++] = s2[i++];
    resp[j] = '\0';

    return (resp);
}

/*int main()
{
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *concatenada;

    // Chamada da função ft_strjoin para concatenar as duas strings
    concatenada = ft_strjoin(s1, s2);

    if (concatenada == NULL)
    {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    // Imprime a string concatenada
    printf("String concatenada: %s\n", concatenada);

    // Libera a memória alocada
    free(concatenada);

    return 0;
}*/