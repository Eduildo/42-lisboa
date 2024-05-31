/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlima <edlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:20:42 by edlima            #+#    #+#             */
/*   Updated: 2024/05/31 17:34:03 by edlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *list;
    list = (t_list *)malloc(sizeof(t_list));
    if (!list)
        return (NULL);
    list->content = content;
    list->next = NULL;
    return (list);
}

/*int main()
{
    int x = 42;
    t_list *element = ft_lstnew(&x);

    if (element)
    {
        printf("Conteúdo do novo elemento: %d\n", *(int *)(element->content));
        free(element);
    }
    else
    {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}*/