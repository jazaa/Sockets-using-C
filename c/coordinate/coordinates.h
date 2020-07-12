typedef struct coordinate_s
{
	/* Pointers to method functions */
	void (*setx)(struct coordinate_s* this, int x);
	void (*sety)(struct coordinate_s* this, int y);
	void (*print)( struct coordinate_s* this);
	/* Data */
	int x;
	int y;
} coordinate;
/* Constructor */
coordinate* coordinate_create(void);
/* Destructor */
void coordinate_destroy(coordinate* this);

static void coordinate_setx(coordinate* this, int x);
static void coordinate_sety(coordinate* this, int y);
static void coordinate_print(coordinate* this);