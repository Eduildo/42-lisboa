/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:40:07 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:44:45 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

/*int main()
{
    char uppercase = 'A';
    char lowercase = ft_tolower(uppercase);

    printf("Letter in uppercase: %c\n", uppercase);
    printf("Letter in lowercase: %c\n", lowercase);
    return (0);
}*/