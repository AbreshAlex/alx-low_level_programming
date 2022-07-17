#include "main.h"

/**
 * binary_to_uint - convert binary num to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted num or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u = 0, t = 1, j = 0, k, i;

	if (b == NULL)
		return (0);

	for (; b[j] != '\0'; j++)
	;

	j--;

	for (i = 0; b[i] != '\0'; i++, j--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		k = j;
		for (; k > 0; k--)
			t = t * 2;

		u = u + ((b[i] - '0') * t);
		t = 1;
	}

	return (u);
}
