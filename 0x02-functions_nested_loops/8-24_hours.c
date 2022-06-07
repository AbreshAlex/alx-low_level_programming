#include "main.h"

/**
 * jack_bauer - entry
 * Return: (0)
 */

void jack_bauer(void)
{
	int j, b;

	j = 0;

	while (j < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		j++;
	}
}
