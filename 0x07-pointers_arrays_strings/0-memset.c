#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array to be filled
 * @b: constant byte to fill
 * @n: n bytes of memory to be filled
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *p;
p = &b;

for (i = 0; i < n; i++)
s[i] = *p;

return (s);
}
