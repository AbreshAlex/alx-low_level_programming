#include "main.h"
#include <string.h>

/**
 * rev_string - fun that revrse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{

int i, j;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');

for (j = 0; s[j] != '\0'; j++)
;

while (j >= 0)
{
_putchar(s[j]);
j--;
}

_putchar('\n');

}
