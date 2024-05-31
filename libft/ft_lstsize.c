/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:42:57 by edlima            #+#    #+#             */
/*   Updated: 2024/05/30 18:43:44 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

/*int main()
{
    // Criar alguns nós para a lista
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    // Inicializar os nós
    node1->content = NULL;
    node1->next = node2;

    node2->content = NULL;
    node2->next = node3;

    node3->content = NULL;
    node3->next = NULL;

    // Obter o tamanho da lista
    int size = ft_lstsize(node1);
    printf("O tamanho da lista é: %d\n", size);

    // Liberar a memória alocada
    free(node3);
    free(node2);
    free(node1);

    return 0;
}*/