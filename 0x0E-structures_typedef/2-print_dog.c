#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints type struct dog
 * @d: type name
 */
void print_dog(struct dog *d)
{
	/*d = malloc(sizeof(struct dog));*/
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == '0')
		d->age = '0';

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
