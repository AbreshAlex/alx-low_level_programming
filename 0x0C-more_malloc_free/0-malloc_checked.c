#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc
 * @b: size of the memory to allocate
 * Return: pointer
 **/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
		return (NULL);
	}

	return (i);
}
