#include <stdio.h>

int addnumbers(int a, int b);

int main(int argc, char *argv[])
{
    int tot;
    tot = addnumbers(2, 9);
    printf("Total: %d\n", tot);
    return 0;
}