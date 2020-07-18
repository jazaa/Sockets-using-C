#include <stdio.h>

int addnum(int a, int b);

int main(int argc, char *argv[])
{
    int total = addnum(5, 9);
    printf("total = %d\n", total);
    return 0;
}