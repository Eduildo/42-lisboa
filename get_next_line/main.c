#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

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
    printf("valor da função: %s", get_next_line(fd));
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Linha lida: %s", line);
        free(line);
    }
    close(fd);

    return (0);
}
