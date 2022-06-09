#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Return: none
 */

void more_numbers(void)
{
	int a, c;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
