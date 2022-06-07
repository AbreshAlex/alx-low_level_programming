#include "main.h"

/**
 * print_alphabet_x10 - entry
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	char f;
	int a = 0;

	while (a < 10)
	{
		f = 'a';
		while (f <= 'z')
		{
			_putchar(f);
			f++;
		}
		_putchar('\n');
		a++;
	}
}
