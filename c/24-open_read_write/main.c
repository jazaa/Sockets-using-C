#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int fd;
    char buf[14];
    fd = open("file.txt", O_CREAT | O_WRONLY, 0600);
    if (fd == -1) {
        printf("Failed to create and open file.\n");
        exit(1);
    }
    write(fd, "Hello World!\n", 13);
    close(fd);

    fd = open("file.txt", O_RDONLY, 0600);
    if (fd == -1) {
        printf("Failed to create and open file.\n");
        exit(1);
    }
    read(fd, buf, 13);
    close(fd);
    printf("Buf: %s\n", buf);
    return 0;
}