#include "main.h"

/**
 * print_last_digit - entry
 * @y: integer
 * Return: last digit value
 */

int print_last_digit(int y)
{
	int x;

	if (y >= 0)
	{
		x = y % 10;
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = (y % 10) * -1;
		_putchar(x + '0');
		return (x);
	}
}
