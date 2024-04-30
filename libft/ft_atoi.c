/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:02:24 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:46:09 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int result;
    int i;
    int sign;

    i = 0;
    sign = 1;
    result = 0;

    while (str[i] && (str[i] == ' ' || str[i] == '\r' || str[i] == '\n' ||
                      str[i] == '\t' || str[i] == '\v' || str[i] == '\f'))
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return (result * sign);
}

/*int main()
{
    char str[] = "12345";
    int num = ft_atoi(str);

    printf("O número convertido é: %d\n", num);

    return 0;
}*/