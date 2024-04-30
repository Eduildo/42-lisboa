/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:40:39 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:26:15 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z ') || (c >= '0' && c <= '9'))
        return (c);
    return (0);
}

/*int main()
{

    char text[] = "hello;";
    int i;

    for (i = 0; text[i] != '\0'; i++)
    {
        printf("The return value is : %d\n", ft_isalnum(text[i]));
    }
    return (0);
}*/