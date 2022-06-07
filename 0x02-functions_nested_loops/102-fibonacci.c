#include <stdio.h>

/**
  * main - entry
  * Return: (0)
  */

int main(void)
{
	int w = 0;
	long x = 1, y = 2;

	while (w < 50)
	{
		if (w == 0)
			printf("%ld", x);
		else if (w == 1)
			printf(", %ld", y);
		else
		{
			y += x;
			x = y - x;
			printf(", %ld", y);
		}
		++w;
	}
	printf("\n");
	return (0);
}
