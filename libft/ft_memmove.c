/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:02:24 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:36:51 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    // declaração de pointers temporarios e o contador
    char *tmp_src;
    char *tmp_dst;
    size_t counter;

    // verificação de pointers passados como parametro
    if (!dest && !src)
        return (NULL);

    tmp_src = (char *)src;
    tmp_dst = (char *)dest;
    counter = 0;

    if (tmp_dst > tmp_src)
        while (len-- > 0)
            tmp_dst[len] = tmp_src[len];
    else
        while (counter < len)
        {
            tmp_dst[counter] = tmp_src[counter];
            counter++;
        }

    return (dest);
}

/*int main()
{

    char str_src[] = "Hello, world!";
    char str_dst[50];

    ft_memmove(str_dst, str_src, 5);
    // memmove(str_dst, str_src, 5);

    printf("String copiado: %s\n", str_dst);

    return (0);
}*/