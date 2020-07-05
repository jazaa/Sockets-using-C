#include "include/animal.h"
#include <stdio.h>

Animal* animal_constructor(Animal* animal, char* speech)
{
    animal->speech = speech;
    animal->speek = animal_speek;
    return animal;
}

void animal_speek(Animal* animal)
{
    printf("%s\n", animal->speech);
}