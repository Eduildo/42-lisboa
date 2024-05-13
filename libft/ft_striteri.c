/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:55:35 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/13 17:27:03 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void modify_function(unsigned int index, char *c)
{
    *c = *c + 1;
}*/
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}
/*int main()
{
    char s[] = "Hello, World!";
    ft_striteri(s, &modify_function);
    printf("String modificada: %s\n", s);

    return (0);
}*/