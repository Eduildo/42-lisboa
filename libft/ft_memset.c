/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:58:30 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/23 15:28:57 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp_ptr;
    tmp_ptr = (unsigned char *)b;
    while (len > 0)
    {
        *(tmp_ptr++) = (unsigned char)c;
        len--;
    }
    return (b);
}

int main()
{
    char str[50] = "Teste de memset";
    printf("Antes: %s\n", str);
    ft_memset(str, 'A', 5);
    printf("Depois: %s\n", str);
}