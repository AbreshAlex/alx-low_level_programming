#include "main.h"

/**
 * rev_string - fun that revrse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{

int i, j, len;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');

len = _strlen(s);

for (j = len; j >= 0; j--)
{
_putchar(s[j]);
}

_putchar('\n');

}
