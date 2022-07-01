#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: first ellement of array
 * @max: last element of array
 * Return: NULL or pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, q;

if (min > max)
{
	return (NULL);
}

q = max - min + 1;
p = malloc(sizeof(int) * q);
if (p == NULL)
{
	return (NULL);
}

for (i = 0; i < q; i++, min++)
p[i] = min;

	return (p);
}
