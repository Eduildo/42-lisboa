#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *resp;
    int i;
    int j;

    i = 0;
    j = 0;
    resp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!resp)
        return (NULL);
    while (s1[i])
        resp[j++] = s1[i++];
    i = 0;
    while (s2[i])
        resp[j++] = s2[i++];
    resp[j] = '\0';
    return (resp);
}

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t i;

    if (!s1)
        return (NULL);

    dest = (char *)malloc(ft_strlen(s1) + 1);
    i = 0;
    if (!dest)
        return (NULL);
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
char *ft_strchr(const char *s, int c)
{
    unsigned int i;
    char cc;
    cc = (char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == cc)
            return ((char *)&s[i]);
        i++;
    }
    if (c == 0)
        return ((char *)s + i);
    return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        ++i;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
