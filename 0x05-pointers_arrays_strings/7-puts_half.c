#include "main.h"

/**
 * puts_half - prints last halfstring
 * @str: string to print
 */
void puts_half(char *str)
{
int i, j;

for (i = 0; str[i] != '\0'; i++)
;

if (i % 2 == 0)
j = i / 2;

if (i % 2 != 0)
j = ((i + 1) / 2);

while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
