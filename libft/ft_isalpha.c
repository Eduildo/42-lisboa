/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:33:44 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/16 16:19:47 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_alpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return c;
    return 0;
}

int main()
{
    char text[10] = "H";
    int i;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (is_alpha(text[i]) == 0)
        {
            printf("The return value is not alpha: %d\n", is_alpha(text[i]));
        }
        else
        {
            printf("The return value is %d\n", is_alpha(text[i]));
        }
    }

    return 0;
}