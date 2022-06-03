#include <stdio.h>

/**
 * main - Entry
 *
 * Return: (0)
 */

int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)

	if (d != 'e' && d != 'q')
		putchar(d);

	putchar('\n');

	return (0);
}
