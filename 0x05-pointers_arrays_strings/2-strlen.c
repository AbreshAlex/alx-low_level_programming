#include "main.h"

/**
 * _strlen - a fun that returns the length of a string
 * @s: string to be measured
 * Return: the length
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
if (i % 10 == 0)
_putchar('i / 10');
else
_putchar('i / 10');
_putchar('i % 10');

return (i);
}
