/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:52:54 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:30:52 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{

    if (c >= '0' && c <= '9')
        return (c);

    return (0);
}

/*int main()
{

    char digit[10] = "Hello2";

    for (int i = 0; digit[i] != '\0'; i++)
    {
        if (ft_isdigit(digit[i]) == 0)
        {
            printf("The return value is not a digit: %d\n", ft_isdigit(digit[i]));
        }
        else
        {
            printf("The return value is %d\n", ft_isdigit(digit[i]));
        }
    }
}*/