#include <stdio.h>

/**
* main - entry
* Return: (0)
*/

int main(void)
{
	int p, q;

	for (p = 1; p < 1024; p++)
		{
		if ((p % 3) == 0 || (p % 5) == 0)
		q += p;
		}
	printf("%d\n", q);
	return (0);
}
