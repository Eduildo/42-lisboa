#include "get_next_line.h"
#define MAX_FD 1024

char *next_line(char *buffer)
{
    size_t len;
    char *line;

    len = 0;
    if (!buffer)
        return (NULL);
    while (buffer[len] && buffer[len] != '\n')
        len++;
    if (buffer[len] == '\n')
        line = (char *)malloc(sizeof(char) * (len + 2));
    else
        line = (char *)malloc(sizeof(char) * (len + 1));
    if (!line)
        return (NULL);
    ft_strncpy(line, buffer, len);
    if (buffer[len] == '\n')
    {
        line[len] = '\n';
        len++;
    }
    line[len] = '\0';
    return (line);
}
char *update_remainder(char *remainder)
{
    char *new_remainder;
    char *new_line_pos;

    new_line_pos = ft_strchr(remainder, '\n');

    if (!new_line_pos)
    {
        free(remainder);
        return (NULL);
    }
    if (*(new_line_pos + 1) == '\0')
    {
        free(remainder);
        return (NULL);
    }
    new_remainder = ft_strdup(new_line_pos + 1);
    if (!new_remainder)
    {
        return (remainder);
    }
    free(remainder);
    return (new_remainder);
}
char *get_next_line(int fd)
{
    static char *remainders[MAX_FD];
    char *buffer;
    char *line = NULL;
    ssize_t bytes_read;

    if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);

    while (remainders[fd] == NULL || !ft_strchr(remainders[fd], '\n'))
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read < 0)
        {
            free(buffer);
            free(remainders[fd]);
            return (NULL);
        }
        if (bytes_read == 0)
            break;
        buffer[bytes_read] = '\0';
        char *temp = ft_strjoin(remainders[fd], buffer);
        if (!temp)
        {
            free(buffer);
            free(remainders[fd]);
            return (NULL);
        }
        free(remainders[fd]);
        remainders[fd] = temp;
    }

    free(buffer);
    if (!remainders[fd] || !remainders[fd][0])
    {
        free(remainders[fd]);
        remainders[fd] = NULL;
        return (NULL);
    }

    line = next_line(remainders[fd]);
    // printf("Linha extraída: %s\n", line ? line : "NULL");
    if (!line)
    {
        free(remainders[fd]);
        remainders[fd] = NULL;
        return (NULL);
    }
    remainders[fd] = update_remainder(remainders[fd]);
    // printf("Remainder após update: '%s'\n", remainders[fd] ? remainders[fd] : "NULL");
    return (line);
}
