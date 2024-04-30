/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 02:52:55 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/29 03:11:23 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *temp;
    size_t i;

    i = 0;
    temp = malloc(count * size);

    if (!temp)
        return (NULL);

    while (i < count * size)
        temp[i++] = 0;
    return (temp);
}

int main()
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

    // Imprime os valores (todos devem ser zero)
    while (i < 10)
    {
        write(1, &ptr[i], sizeof(int));
        i++;
    }
    write(1, "\n", 1);
    // Libera a memória alocada
    free(ptr);

    return 0;
}