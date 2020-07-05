#include "include/cow.h"
#include <stdlib.h>

Cow* new_cow()
{
    Cow* cow = calloc(1, sizeof(struct COW_STRUCT));
    animal_constructor((Animal*)cow, "Hello World");
    return cow;
}