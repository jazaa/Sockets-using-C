#include <stdio.h>

int recursive(int a)
{
    int ret;
    a = a * 2 + 2;
    printf("a = %d\n", a);
    ret = a < 100 ? recursive(a) : a;
    printf("ret = %d\n", ret);
    return ret;
}

int main(int argc, char *argv[])
{
    int ret;
    ret = recursive(1);
    printf("main: ret = %d\n", ret);
    return 0;
}