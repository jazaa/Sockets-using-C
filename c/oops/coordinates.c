#include "coordinates.h"
#include <stdio.h>
#include <stdlib.h>

/* Constructor */
coordinate *coordinate_create(void)
{
	coordinate *c = malloc(sizeof(*c));
	if (c != 0)
	{
		c->setx = &coordinate_setx;
		c->sety = &coordinate_sety;
		c->print = &coordinate_print;
		c->x = 0;
		c->y = 0;
	}
}

/* Destructor */
void coordinate_destroy(coordinate *this)
{
	if (this != NULL)
	{
		free(this);
	}
}

// Methods
static void coordinate_setx(coordinate *this, int x)
{
	if (this != NULL)
	{
		this->x = x;
	}
}

static void coordinate_sety(coordinate *this, int y)
{
	if (this != NULL)
	{
		this->y = y;
	}
}

static void coordinate_print(coordinate *this)
{
	if (this != NULL)
	{
		printf("Coordinate: (%i, %i)\n", this->x, this->y);
	}
	else
	{
		printf("NULL pointer exception!\n");
	}
}
