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
    // printf("Resultado de ft_strchr: %s\n", new_line_pos ? new_line_pos : "NULL");

    if (!new_line_pos)
    {
        // printf("Sem nova linha encontrada em remainder.\n");
        free(remainder);
        return (NULL);
    }
    if (*(new_line_pos + 1) == '\0')
    {
        // printf("Nenhum conteúdo após o '\\n'.\n"); // Depuração
        free(remainder);
        return (NULL);
    }
    new_remainder = ft_strdup(new_line_pos + 1);
    // printf("New Remainder depois de ft_strdup: '%s'\n", new_remainder ? new_remainder : "NULL");

    if (!new_remainder)
    {
        // printf("New Remainder está vazio.\n");
        //  free(remainder);
        return (remainder);
    }
    free(remainder);
    return (new_remainder);
}
char *get_next_line(int fd)
{
    static char *remainder = NULL;
    char *buffer;
    char *line = NULL;
    ssize_t bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);

    while (remainder == NULL || !ft_strchr(remainder, '\n'))
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        // printf("Bytes lidos: %zd\n", bytes_read);
        if (bytes_read < 0)
        {
            free(buffer);
            free(remainder);
            return (NULL);
        }
        if (bytes_read == 0)
            break;
        buffer[bytes_read] = '\0';
        char *temp = ft_strjoin(remainder, buffer);
        if (!temp)
        {
            free(buffer);
            free(remainder);
            return (NULL);
        }
        free(remainder);
        remainder = temp;
        // printf("Remainder após ft_strjoin: '%s'\n", remainder ? remainder : "NULL");
    }

    free(buffer);
    if (!remainder || !*remainder)
        return (NULL);
    line = next_line(remainder);
    if (!line)
    {
        free(remainder);
        remainder = NULL;
        return (NULL);
    }
    remainder = update_remainder(remainder);
    return (line);
}
