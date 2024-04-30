/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:12:45 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:27:00 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (c);
    return (0);
}

int main()
{

    char text[] = "helló";

    for (int i = 0; text[i] != '\0'; i++)
        printf("\n%d", ft_isascii(text[i]));
    return 0;
}