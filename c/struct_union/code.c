#include <stdio.h>
#include <string.h>
union My_Union
{
	int variable_1;
	int variable_2;
	int variable_3;
};
struct My_Struct
{
	int variable_1;
	int variable_2;
};
int main(void)
{
	union My_Union u;
	struct My_Struct s;
	u.variable_1 = 1;
	u.variable_2 = 2;
	u.variable_3 = 5;
	s.variable_1 = 1;
	s.variable_2 = 2;
	printf("u.variable_1: %d\n", u.variable_1);
	printf("u.variable_2: %d\n", u.variable_2);
	printf("u.variable_2: %d\n", u.variable_3);
	printf("s.variable_1: %d\n", s.variable_1);
	printf("s.variable_2: %d\n", s.variable_2);
	printf("sizeof (union My_Union): %ld\n", sizeof(union My_Union));
	printf("sizeof (struct My_Struct): %ld\n", sizeof(struct My_Struct));
	return 0;
}
