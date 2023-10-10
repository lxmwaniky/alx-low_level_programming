#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog info
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", ((d->name) ? d->name : "(nil)"));
	if (d->age >= 0.0)
		printf("Age: %f\n", d->age);
	else
		puts("Age: (nil)");
	printf("Owner: %s\n", ((d->owner) ? d->owner : "(nil)"));
}
