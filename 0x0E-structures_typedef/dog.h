#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - new type
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*dog.h*/
