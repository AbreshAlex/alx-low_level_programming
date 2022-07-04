#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes type struct dog
 * @d: type name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	/*d = malloc(sizeof(struct dog));*/
	if (d == NULL)
		return;
	d->age = age;
	d->name = name;
	d->owner = owner;
}
