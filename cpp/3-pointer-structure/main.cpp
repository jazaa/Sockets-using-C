#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;

    (*p).length = 15;
    // p->length = 16;

    printf("length: %d\n", r.length);
    printf("breadth: %d\n", r.breadth);

    // create in heap memory
    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->breadth = 99;
    p1->length = 100;

    printf("length: %d\n", p1->length);
    printf("breadth: %d\n", p1->breadth);

    return 0;
}