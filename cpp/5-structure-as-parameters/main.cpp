#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};

void inc_length(struct Rectangle *r)
{
    r->length++;
}

int area(struct Rectangle *r)
{
    return r->length * r->width;
}

struct Rectangle *get_rectangle()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 99;
    p->width = 100;
    return p;
}

int main()
{
    struct Rectangle *ptr = get_rectangle();
    inc_length(ptr);

    printf("length: %d\n", ptr->length);
    printf("width: %d\n", ptr->width);

    printf("area: %d\n", area(ptr));

    return 0;
}