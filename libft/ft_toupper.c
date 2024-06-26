/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:05:35 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/13 16:33:40 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

/*int main()
{
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);

    printf("Letter in lowercase: %c\n", lowercase);
    printf("Letter in uppercase: %c\n", uppercase);
    return (0);
}*/