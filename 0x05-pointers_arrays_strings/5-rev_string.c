#include "main.h"

/**
 * rev_string - fun that revrse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
_putchar('\n');
for (i = 0; s[i] != '\0'; i++)
;
i = i - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
