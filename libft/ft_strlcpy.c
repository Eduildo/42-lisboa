/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:55:07 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/07 02:53:13 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dst_len)
{

    size_t src_len;
    src_len = ft_strlen(src);

    if (src_len + 1 < dst_len)
    {
        ft_memcpy(dst, src, src_len + 1);
    }
    else if (dst_len != 0)
    {
        ft_memcpy(dst, src, dst_len - 1);
        dst[dst_len - 1] = '\0';
    }
    return (src_len);
}

int main()
{

    const char *src = "Hello, world!";

    char dest[50];

    size_t copied_len = ft_strlcpy(dest, src, sizeof(dest));

    printf("String copiada: %s\n", dest);
    printf("Comprimento da string copiada: %zu\n", copied_len);

    return (0);
}
