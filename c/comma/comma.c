#include <stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int *p = &arr[2];
	int *q = &arr[3];
	int diff = q - p;
	printf("q - p = %i\n", diff);				  /* Outputs "1". */
	printf("%d\n", *p);				  /* Outputs "1". */
	printf("*(p + (q - p)) = %d\n", *(p + diff)); /* Outputs "4". */
}
