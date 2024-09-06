#include "get_next_line.h"
#include <fcntl.h>  // Para a função open
#include <stdio.h>  // Para printf e perror
#include <unistd.h> // Para close

int main(void)
{
    int fd;
    char *line;

    // Criar e abrir um arquivo temporário para teste
    fd = open("test_file.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("open");
        return (1);
    }

    // Escrever algumas linhas no arquivo
    dprintf(fd, "Linha 1\nLinha 2\nLinha 3\n");

    // Voltar ao início do arquivo para leitura
    lseek(fd, 0, SEEK_SET);

    // Ler e imprimir as linhas usando get_next_line
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line); // Não esquecer de liberar a memória alocada
    }

    // Fechar o arquivo
    close(fd);

    return (0);
}
