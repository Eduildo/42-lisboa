#include "get_next_line.h"

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
    // printf("Lembranças: %s\n", new_line_pos);
    new_remainder = ft_strdup(new_line_pos + 1);
    // printf("New Remainder: %s\n", new_remainder);
    if (!new_remainder)
    {
        // free(remainder);
        return (remainder);
    }
    free(remainder);
    return (new_remainder);
}
char *get_next_line(int fd)
{
    static char *remainder;
    char *buffer;
    char *line;
    ssize_t bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);
    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read < 0)
    {
        free(buffer);
        return (NULL);
    }
    buffer[bytes_read] = '\0';
    remainder = ft_strjoin(remainder, buffer);
    free(buffer);
    if (!remainder)
        return (NULL);
    line = next_line(remainder);
    remainder = update_remainder(remainder);
    return (line);
}
