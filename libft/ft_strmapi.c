/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:20:47 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/13 17:26:32 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char map_function(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return ((char)(c - 'a' + 'A'));
    if (c >= 'A' && c <= 'Z')
        return ((char)(c - 'A' + 'a'));
    return (c);
}*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *result;

    i = 0;
    result = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!result)
        return (NULL);
    while (s[i] != '\0')
    {
        result[i] = (*f)(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}
/*int main()
{
    const char *s = "Hello, World!";

    char *mapped_string = ft_strmapi(s, &map_function);

    if (mapped_string == NULL)
    {
        printf("Erro: Falha na alocação de memória.\n");
        return 1;
    }

    printf("String original: %s\n", s);
    printf("String mapeada: %s\n", mapped_string);
    free(mapped_string);

    return (0);
}*/