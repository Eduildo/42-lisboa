/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:57:53 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:32:12 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (c);
    return (0);
}

/*int main()
{
    char text[] = "\n";
    for (int i = 0; text[i] != '\0'; i++)
    {
        printf("\n%d", ft_isprint(text[i]));
    }
}*/