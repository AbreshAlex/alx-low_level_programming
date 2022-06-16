#include "main.h"

/**
 * *rot13 - a fun that 13 rotates a string
 * @c: source string
 * Return: string
 */

char *rot13(char *c)
{
int i = 0;

for (; c[i] != '\0'; i++)
{
while ((('a' <= c[i]) && (c[i] <= 'z')) || (('A' <= c[i]) && (c[i] <= 'Z')))
{
if ((c[i] > 'm') || (c[i] > 'M'))
{
c[i] = c[i] - 13;
}
else
{
c[i] = c[i] + 13;
}
}
}
return (c);
}
