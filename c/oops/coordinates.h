typedef struct coordinate_s
{
	void (*setx)(coordinate *this, int x);
	void (*sety)(coordinate *this, int y);
	void (*print)(coordinate *this);
	int x;
	int y;
} coordinate;

/* Construct */
coordinate *coordinate_create(void);

void coordinate_destroy(coordinate *this);