typedef struct coordinate
{
	/* Pointers to method functions */
	void (*setx)(struct coordinate *this, int x);
	void (*sety)(struct coordinate *this, int y);
	void (*print)( struct coordinate *this);
	/* Data */
	int x;
	int y;
} coordinate;
/* Constructor */
coordinate *coordinate_create(void);
/* Destructor */
void coordinate_destroy(coordinate *this);