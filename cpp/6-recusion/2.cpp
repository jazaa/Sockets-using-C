#include <stdio.h>

int func(int n)
{
    static int x = 0;
    while (n > 0)
    {
        x++;
        printf("n: %d\n", n);
        n--;
    }

    return x;
}

int main()
{
    int a = 10;
    printf("static: %d", func(a));
    return 0;
}