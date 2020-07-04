#include "coordinates.h"
#include <stddef.h>

int main(void)
{
    coordinate *c1 = coordinate_create();
    coordinate *c2 = coordinate_create();

    c1->setx(c1, 1);
    c1->sety(c1, 2);
    c1->print(c1);

    coordinate_destroy(c1);
    c1 = NULL;
    return 0;
}