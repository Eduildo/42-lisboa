/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:20:29 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:40:51 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while (str[i])
        i++;
    return i;
}

/*int main()
{
    char text[] = "Hello, world";
    size_t length = ft_strlen(text);
    printf("Length of string: %zu\n", length);
    return 0;
}*/