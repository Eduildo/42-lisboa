#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd;
    int i;
    char *line;

    fd = open("test_file.txt", O_RDONLY);
    i = 1;

    // printf("valor da função: %s\n", get_next_line(fd));
    while (i < 10)
    {
        line = get_next_line(fd);
        printf("Linha lida: %s", line);
        free(line);
        i++;
    }
    close(fd);

    return (0);
}
