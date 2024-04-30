/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduildo <eduildo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:18:39 by eduildo           #+#    #+#             */
/*   Updated: 2024/04/30 19:06:25 by eduildo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

// libc
#include <stdio.h>
#include <stdlib.h>
// end libc

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int c);
int is_alpha(int c);
int ft_isascii(int c);
char *ft_strdup(const char *s1);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t ft_strlcpy(char *dst, const char *src, size_t dst_len);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t len);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif