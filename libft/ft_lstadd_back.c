/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:29:01 by edlima            #+#    #+#             */
/*   Updated: 2024/05/30 19:00:20 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    temp = *lst;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new;
}
/*int main()
{
    // Criar alguns nós para a lista
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    // Inicializar os nós
    node1->content = NULL;
    node1->next = NULL;

    node2->content = NULL;
    node2->next = NULL;

    node3->content = NULL;
    node3->next = NULL;

    // Criar uma lista encadeada vazia
    t_list *lista = NULL;

    // Adicionar nós à lista
    ft_lstadd_back(&lista, node1);
    ft_lstadd_back(&lista, node2);
    ft_lstadd_back(&lista, node3);

    // Imprimir os nós da lista
    printf("Conteúdo dos nós da lista:\n");
    t_list *temp = lista;
    while (temp != NULL)
    {
        printf("%p\n", temp->content);
        temp = temp->next;
    }

    // Liberar a memória alocada
    free(node3);
    free(node2);
    free(node1);

    return 0;
}*/
