#include "main.h"

/**
 * _puts - a fun that prints string to stdout then new line
 * @str: string to be printed
 * Return: 0
 */
void _puts(char *str)
{
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
j = str[i];
_putchar(j);
}
_putchar('\n');
}
