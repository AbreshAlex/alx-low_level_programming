#include <stdio.h>
/**
 * main - entry
 *Return: 0
 */
int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
