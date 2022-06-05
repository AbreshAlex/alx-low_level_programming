
#include<stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int b, d;

	for (b = 0; b <= 98; b++)
	{
		for (d = b + 1; d <= 99; d++)
		{
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (b == 98 && d == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
