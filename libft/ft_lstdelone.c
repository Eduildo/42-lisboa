/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:05:10 by edlima            #+#    #+#             */
/*   Updated: 2024/05/30 19:17:18 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void delete_int(void *data)
{
    free(data); // Supondo que o conteúdo seja um ponteiro para um inteiro
}
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL)
        return;
    if (del != NULL)
        del(lst->content);
    free(lst);
}

int main()
{
    // Criar um nó para a lista
    t_list *node = (t_list *)malloc(sizeof(t_list));
    int *data = (int *)malloc(sizeof(int));
    *data = 42;
    node->content = data;
    node->next = NULL;

    // Deletar o nó
    ft_lstdelone(node, &delete_int);

    return 0;
}
