/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:52:15 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/11 18:17:51 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int int_len(int nbr)
{
    int len;

    len = 0;
    if (nbr < 0)
        len++;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        len++;
    }
    return (len);
}
char *ft_itoa(int n)
{
    char *result;
    int len;

    len = int_len(n);
    result = malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    result[len--] = '\0';
    if (n == 0)
        result[0] = '0';
    if (n < 0)
        result[0] = '-';
    while (n != 0)
    {
        if (result[0] == '-')
            result[len--] = -(n % 10) + '0';
        else
            result[len--] = (n % 10) + '0';
        n = n / 10;
    }
    return (result);
}
int main()
{
    int num = -2147483648;
    int i;
    i = 0;
    char *result = ft_itoa(num);
    printf("Maior número positivo (INT_MAX): %d\n", INT_MAX);
    printf("Maior número negativo (-INT_MAX - 1): %d\n", -INT_MAX - 1);
    while (result[i] != '\0')
        printf("%c", result[i++]);
    printf("\n");
    free(result);

    return 0;
}