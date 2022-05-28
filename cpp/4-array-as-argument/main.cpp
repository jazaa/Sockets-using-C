#include <stdio.h>
#include <stdlib.h>

int *dynamic_array(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    // returning address of array
    return p;
}

void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int *a, size = 5;
    a = dynamic_array(size);
    a[0] = 1;

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    print_array(a, size);

    return 0;
}