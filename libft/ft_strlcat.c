/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:09:34 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/25 17:57:26 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>
#include "ft_strlen.c"
#include "ft_memcpy.c"

size_t ft_strlcat(char *dst, const char *src, size_t dst_size)
{
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len >= dst_size)
        dst_len = dst_size;

    if (dst_len == dst_size)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, dst_size - dst_len - 1);
        dst[dst_size - 1] = '\0';
    }
    return (dst_len + src_len);
}

int main()
{

    const char *src = "Hello, world!";

    char dest[1];

    size_t copied_len = ft_strlcat(dest, src, sizeof(dest));

    printf("String concatenada: %s\n", dest);
    printf("Comprimento da string concatenada: %zu\n", copied_len);

    return (0);
}