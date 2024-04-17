/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:58:30 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/17 19:02:21 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp_ptr;
    tmp_ptr = (unsigned char *)b;
    while (len > 0)
    {
        *(tmp_ptr++) = (unsigned char)c;
        len--;
    }
    return (b);
}