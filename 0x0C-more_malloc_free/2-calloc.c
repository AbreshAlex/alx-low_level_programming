#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of array
 * @size: bytes of each element
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **p;
	unsigned int i;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}

p = malloc(nmemb * sizeof(void *));
if (p == NULL)
{
	return (NULL);
}
i = 0;
for (; i < nmemb; i++)
{
	p[i] = malloc(size);
	if (p[i] == NULL)
	{
		for (; i > 0; i--)
		free(p[i]);
		free(p[0]);
		free(p);
		return (NULL);
	}
}


	return (p);
}
