#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
* print_dog - prints a struct dog
* @d: struct dog to print
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";


	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
