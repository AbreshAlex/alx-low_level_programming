#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes of s2
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i = n, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	i = 0;

	for (j = 0; s1[j]; j++)
		x[i++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
		x[i++] = s2[j];

	x[i] = '\0';

	return (x);
}
