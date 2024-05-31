/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:16:48 by edlima            #+#    #+#             */
/*   Updated: 2024/05/30 18:45:35 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
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

    // Encontrar o último nó da lista
    t_list *last_node = ft_lstlast(node1);
    if (last_node != NULL)
    {
        printf("O conteúdo do último nó é: %p\n", last_node->content);
    }
    else
    {
        printf("A lista está vazia.\n");
    }

    // Liberar a memória alocada
    free(node3);
    free(node2);
    free(node1);

    return 0;
}*/