typedef struct coordinate_s
{
	/* Pointers to method functions */
	void (*setx)(coordinate *this, int x);
	void (*sety)(coordinate *this, int y);
	void (*print)(coordinate *this);
	/* Data */
	int x;
	int y;
} coordinate;
/* Constructor */
coordinate *coordinate_create(void);
/* Destructor */
void coordinate_destroy(coordinate *this);