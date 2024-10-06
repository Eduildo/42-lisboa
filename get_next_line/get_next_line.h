#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#define BUFFER_SIZE 1000

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>

char *next_line(char *buffer);
char *update_remainder(char *remainder);
char *get_next_line(int fd);
size_t ft_strlen(const char *str);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strdup(const char *s1);
char *ft_strchr(const char *s, int c);
char *ft_strncpy(char *dest, char *src, unsigned int n);
#endif