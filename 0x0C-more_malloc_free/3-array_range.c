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
	int i;

if (min > max)
{
	return (NULL);
}

p = malloc(max - min);
if (p == NULL)
{
	return (NULL);
}

for (i = 0; i < max - min; i++)
p[i] = min++;

	return (p);
}
