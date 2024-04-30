/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:10:14 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:33:40 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    // converter s1 e s2 em unsigned char

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;

    while (n > i)
    {
        // chec if the current byte is different in both s1 and s2
        if ((unsigned char)str1[i] != (unsigned char)str2[i])
            return ((unsigned char)str1[i] - (unsigned char)str2[i]);
        i++;
    }

    return (0);
}

/*int main()
{
    char str1[] = "hello";
    char str2[] = "Hello";

    // Comparando os dois arrays de caracteres
    int result = ft_memcmp(str1, str2, ft_strlen(str1));

    if (result == 0)
    {
        printf("As strings são iguais.\n");
    }
    else if (result < 0)
    {
        printf("str1 vem antes de str2 no conjunto ordenado.\n");
    }
    else
    {
        printf("str2 vem antes de str1 no conjunto ordenado.\n");
    }

    return 0;
}*/
