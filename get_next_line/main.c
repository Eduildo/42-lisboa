#include "get_next_line.h"
#include <fcntl.h>  // Para a função open
#include <stdio.h>  // Para printf e perror
#include <unistd.h> // Para close

int main(void)
{
    int fd;
    char *line;

    fd = open("test_file.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("open");
        return 1;
    }
    printf("Leitura completa.\n");
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Linha lida: %s", line);
        free(line);
    }
    close(fd);

    return (0);
}
