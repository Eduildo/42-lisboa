/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:50:59 by eduildo           #+#    #+#             */
/*   Updated: 2024/05/10 18:42:38 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "ft_calloc.c"
#include "ft_strlen.c"

static int char_counter(const char *str, char c)
{
    int counter;
    int x;

    counter = 0;
    x = 0;
    while (*str)
    {
        if (*str != c && x == 0)
        {
            x = 1;
            counter++;
        }
        else if (*str == c)
            x = 0;
        str++;
    }
    return (counter);
}
static void free_array(char **str, int count)
{
    int i;

    i = 0;
    while (count > i)
    {
        free(str[i]);
        i++;
    }
    free(str);
}
static char *str_fill(const char *str, int start, int end)
{
    char *word;
    int i;

    i = 0;
    word = malloc((end - start + 1) * sizeof(char));
    if (!word)
        return (NULL);
    while (start < end)
    {
        word[i] = str[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
}
static void split_string(char const *s, char c, char **res)
{
    size_t i = 0;
    int j = 0;
    int s_word = -1;

    while (s[i])
    {
        if (s[i] != c && s_word < 0)
            s_word = i;
        else if ((s[i] == c || !s[i + 1]) && s_word >= 0)
        {
            res[j] = str_fill(s, s_word, i + (s[i] == c ? 0 : 1));
            if (!res[j])
            {
                free_array(res, j);
                return;
            }
            s_word = -1;
            j++;
        }
        i++;
    }
}

char **ft_split(char const *s, char c)
{
    char **res;
    size_t i;
    int j;
    int s_word;

    i = 0;
    j = 0;
    s_word = -1;
    res = ft_calloc((char_counter(s, c) + 1), sizeof(char *));
    if (!res)
        return NULL;
    split_string(s, c, res);
    return (res);
}

int main(void)
{
    char const *s = "Olá,,,,,,,,,como,,,,Vai?";
    char c = ',';
    char **split;
    int i;
    int numStrings = 0;

    i = 0;
    split = ft_split(s, c);
    while (split[numStrings] != NULL)
    {
        numStrings++;
    }
    for (int i = 0; i < numStrings; i++)
    {
        printf("split[%d]: %s\n", i, split[i]);
    }
    for (int i = 0; i < numStrings; i++)
    {
        free(split[i]);
    }

    free(split);

    return (0);
}