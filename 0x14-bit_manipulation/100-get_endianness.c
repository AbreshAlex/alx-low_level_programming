#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 big 1 little
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
