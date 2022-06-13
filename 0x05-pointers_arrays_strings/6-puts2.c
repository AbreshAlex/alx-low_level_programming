#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string to process
 */
void puts2(char *str)
{
int i;
i = 0;

/*_putchar(str[i]);*/

while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);

i++;
}

_putchar('\n');

}
