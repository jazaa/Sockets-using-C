#include <stdio.h>
#include "include/cow.h"

int main(int argc, char *argv[])
{
    Cow *cow = new_cow();
    Animal* animal_cow = (Animal*) cow;
    animal_cow->speek(animal_cow);
    return 0;
}