#include "main.h"

/**
 * string_toupper - changes lowercase to upper
 * @c: string
 * Return: destination string
 */
char *string_toupper(char *c)
{
int i = 0;

for (; c[i] != '\0'; i++)
if ('a' <= c[i] && c[i] <= 'z')
c[i] = c[i] - 32;


return (c);
}
