#include "coordinates.h"
#include <stddef.h>
int main(int argc, char *argv[])
{
    /* Create and initialize pointers to coordinate objects */
    coordinate *c1 = coordinate_create();
    coordinate *c2 = coordinate_create();
    /* Now we can use our objects using our methods and passing the object as parameter */
    c1->setx(c1, 1);
    c1->sety(c1, 2);
    c2->setx(c2, 3);
    c2->sety(c2, 4);
    c1->print(c1);
    c2->print(c2);
    /* After using our objects we destroy them using our "destructor" function */
    coordinate_destroy(c1);
    c1 = NULL;
    coordinate_destroy(c2);
    c2 = NULL;
    return 0;
}