/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 00:32:20 by edlima            #+#    #+#             */
/*   Updated: 2024/05/31 18:34:22 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *duplicate_int(void *data)
{
    int *new_int = (int *)malloc(sizeof(int));
    if (new_int == NULL)
        return NULL;
    *new_int = *(int *)data * 2;
    return new_int;
}

// Função para deletar um inteiro
void delete_int(void *data)
{
    free(data);
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_elem;
    t_list *temp;

    if (!lst || !f)
        return (NULL);
    new_list = NULL;
    while (lst != NULL)
    {
        temp = ft_lstnew(f(lst->content));
        if (temp == NULL)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        if (new_list == NULL)
            new_list = temp;
        else
            new_elem->next = temp;

        new_elem = temp;
        lst = lst->next;
    }
    return (new_list);
}

int main()
{
    // Criar alguns nós para a lista
    t_list *node1 = ft_lstnew(malloc(sizeof(int)));
    *(int *)(node1->content) = 42;

    t_list *node2 = ft_lstnew(malloc(sizeof(int)));
    *(int *)(node2->content) = 100;

    // Conectar os nós
    node1->next = node2;
    node2->next = NULL;

    // Aplicar a função de mapeamento
    t_list *new_list = ft_lstmap(node1, &duplicate_int, &delete_int);

    // Imprimir os conteúdos da nova lista
    t_list *current = new_list;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }

    // Limpar as listas
    ft_lstclear(&node1, &delete_int);
    ft_lstclear(&new_list, &delete_int);

    return 0;
}