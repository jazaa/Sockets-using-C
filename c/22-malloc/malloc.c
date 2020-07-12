#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *ptr;
    ptr = (char *)malloc(24);
    if (ptr == NULL) {
        printf("Failed to get the allocate memory\n");
        exit(EXIT_FAILURE);
    }
    strcpy(ptr, "Hello World!");
    printf("ptr: %s\n", ptr);
    free(ptr);
    return EXIT_SUCCESS;
}