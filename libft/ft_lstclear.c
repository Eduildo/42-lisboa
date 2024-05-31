/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:23:37 by edlima            #+#    #+#             */
/*   Updated: 2024/05/30 19:28:14 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current;
    t_list *next_node;

    if (lst == NULL || *lst == NULL)
        return;

    current = *lst;

    while (current != NULL)
    {
        next_node = current->next;
        if (del != NULL)
            del(current->content);
        free(current);
        current = next_node;
    }

    *lst = NULL;
}