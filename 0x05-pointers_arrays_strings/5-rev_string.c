#include "main.h"
#include <string.h>

/**
 * rev_string - fun that revrse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int x = 0, i, y = 0;

while (*(s + x) != '\0')
{
x++;
}

for (i = 0 ; i <= ((x - 1) / 2) ; i++)
{
y = *(s + i);
*(s + i) = *(s + (x - (i + 1)));
*(s + (x - (i + 1))) = y;
}

}
