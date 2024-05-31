/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:54:29 by edlima            #+#    #+#             */
/*   Updated: 2024/05/30 18:43:00 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}*/

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
        return;
    new->next = *lst;
    *lst = new;
}
/*int main()
{
    t_list *head = NULL;

    // Cria novos elementos
    t_list *element1 = ft_lstnew("World");
    t_list *element2 = ft_lstnew("Hello");
    t_list *element3 = ft_lstnew("42");

    // Adiciona os elementos na frente da lista
    ft_lstadd_front(&head, element1);
    ft_lstadd_front(&head, element2);
    ft_lstadd_front(&head, element3);

    // Imprime a lista para verificar a ordem dos elementos
    print_list(head); // Esperado: "42 -> Hello -> World -> NULL"

    // Libera a memória alocada
    t_list *current = head;
    t_list *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}*/