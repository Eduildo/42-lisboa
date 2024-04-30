/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:32:05 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 18:23:14 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n)
{
    // temporarily pointer
    char *tmp_ptr;

    // temporary pointer equal to s, to be converter into char
    tmp_ptr = (char *)s;

    //
    while (n > 0)
    {
        *(tmp_ptr++) = 0;
        n--;
    }
}

/*int main()
{
    char str[50] = "Teste de memset";
    printf("Antes: %s\n", str);
    ft_bzero(str, 1);
    printf("Depois: %s\n", str);
}*/