#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct people_tag {
	char firstname[20];
	char lastname[20];
	unsigned int age;
	struct people_tag *next;
} people_t;

int main(int argc, char *argv[])
{
	people_t *head = NULL;
	people_t *new;
	people_t *list;
	char *name[] = {"John", "Andy", "Peter", "Raul", NULL};
	char *last[] = {"Doe", "Mans", "Mars", "Gonzales", NULL};
	unsigned int age[] = {22, 34, 56, 12, 23};
	int i = 0;
	while(name[i]) {
		new = (people_t *) malloc(sizeof(people_t));
		if (new == NULL) {
			fprintf(stderr, "Unable to allocate memory.\n");
			exit(1);
		}
		strcpy(new->firstname, name[i]);
		strcpy(new->lastname, last[i]);
		new->age = age[i];
		new->next = head;
		head = new;
		i++;
	}

	list = head;

	while(NULL != list)
	{
		printf("Firstname: %s\n", list->firstname);
		printf("Lasttname: %s\n", list->lastname);
		printf("Age: %d\n", list->age);
		list = list->next;
	}

	list = head;
	while(NULL != list)
	{
		head = list->next;
		free(list);
		list = head;
	}
	return 0;
}
