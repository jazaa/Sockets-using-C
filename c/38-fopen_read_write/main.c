#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fd;
    char buf[10];
    size_t sz;
    fd = fopen("file.txt", "r");
    if (fd == NULL)
    {
        perror("fopen");
        exit(1);
    }
    while (!feof(fd))
    {
        sz = fread((void *)buf, 9, 1, fd);
        buf[9] = '\0';
        printf("%s\n", buf);
    }
    printf("\n");
    fclose(fd);
    return 0;
}