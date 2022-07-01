#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory block using malloc, free
 * @ptr: pointer  to memory
 * @old_size: previous memory size
 * @new_size: new memory size
 * Return: NULL or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *s = ptr;
	unsigned int i;

if (new_size == old_size)
	return (ptr);
if (ptr == NULL)
{
	p = malloc(new_size);
	free(ptr);
	if (p == NULL)
	return (NULL);
	return (p);
}
if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
if (new_size > old_size)
{
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	for (i = 0; i < old_size; i++)
	p[i] = s[i];
	free(ptr);
	return (p);
}
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	for (i = 0; i < new_size; i++)
	p[i] = s[i];
	/*k = old_size - new_size;*/
	/*for (j = 0; j < k; j++, new_size++)*/
	/*free(p[new_size]);*/
	free(ptr);
	return (p);
}
