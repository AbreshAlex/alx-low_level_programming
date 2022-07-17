#include "main.h"

/**
 * print_binary - print binary form of num
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j = n;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		i = n << 1;

		if ((i >> 1) != n)
			break;

		n = n << 1;
	}

	while (n > 0)
	{
		i = n << 1;

		if ((i >> 1) != n)
			_putchar('1');
		else
			_putchar('0');

		n = n << 1;
	}

	while (j > 0)
	{
		i = j >> 1;

		if ((i << 1) == j)
			_putchar('0');
		else
			break;

		j = j >> 1;
	}
}
