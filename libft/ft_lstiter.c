/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 00:32:56 by edlima            #+#    #+#             */
/*   Updated: 2024/05/31 00:36:34 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstiter(t_list *lst, void (*f)(void))
{
    if (lst == NULL || f == NULL)
        return;

    t_list *current = lst;
    while (current != NULL)
    {
        f(current->content);
        current = current->next;
    }
}