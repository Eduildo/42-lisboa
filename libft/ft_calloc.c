/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 02:52:55 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/25 23:45:10 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void *ft_calloc(size_t count, size_t size)
{
    void *temp;

    if (count == 0 || size == 0)
        return (malloc(0));
    if (SIZE_MAX / count < size)
        return NULL;
    temp = malloc(count * size);
    if (temp == NULL)
        return (NULL);
    ft_bzero(temp, count);
    return (temp);
}

/*int main()
{
    int *ptr;
    int i;

    i = 0;

    // Testando ft_calloc para alocar e inicializar 10 inteiros
    ptr = (int *)ft_calloc(10, sizeof(int));

    if (ptr == NULL)
    {
        printf("Falha ao alocar memória.\n");
        return 1;
    }
    else
    {
        printf("Memoria alocada com sucesso.\n");
    }
    // Libera a memória alocada
    free(ptr);

    return 0;
}*/