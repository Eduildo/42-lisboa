/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:09:34 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/14 13:57:57 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_strlen.c"
// #include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t src_len;
    size_t dst_len;
    size_t i;

    i = 0;
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (size <= 0)
        return (src_len);
    if (dst_len >= size)
        return (size + src_len);
    while (src[i] && i + dst_len < size - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (src_len + dst_len);
}

/*int main()
{

    const char *src = "Hello, world!";

    char dest[] = "OK";
    int size = ft_strlen(src) + ft_strlen(dest);
    size_t copied_len = ft_strlcat(dest, src, -1);

    printf("String concatenada: %s\n", dest);
    printf("Comprimento da string concatenada: %zu\n dest se tornou: %s\n", copied_len, dest);

    return (0);
}*/