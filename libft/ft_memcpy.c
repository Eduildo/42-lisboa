/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:06:21 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/23 17:01:23 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *tmp_dst;
    unsigned char *tmp_src;

    if (dest == (void *)0 && src == (void *)0)
        return (dest);
    tmp_dst = (unsigned char *)dest;
    tmp_src = (unsigned char *)src;

    while (n > 0)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dest);
}

int main()
{

    char src[] = "Hello, world!";
    char dest[50];

    ft_memcpy(dest, src, sizeof(src));

    printf("Dados copiados: %s\n", dest);

    return 0;
}