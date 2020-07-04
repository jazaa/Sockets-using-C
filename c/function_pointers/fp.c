#include <stdio.h>

int add_numbers(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    int result;
    int (*myfunc_ptr)(int, int);
    myfunc_ptr = &add_numbers;
    result = myfunc_ptr(3, 9);
    printf("Result = %d\n", result);
    return 0;
}