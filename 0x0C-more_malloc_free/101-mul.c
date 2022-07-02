#include "main.h"
#include <stdlib.h>

void error(void);
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 or exit 98
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	error();

for (i = 1; i < argc; i++)
	for (j = 0; argv[i][j] != '\0'; j++)
		if (argv[i][j] < '0' || argv[i][j] > '9')
			error();



	return (0);
}

/**
 * error - prints error
 * @void: takes no arguments
 * Return: NULL
 */
void error(void)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
/*return (NULL);*/
}

