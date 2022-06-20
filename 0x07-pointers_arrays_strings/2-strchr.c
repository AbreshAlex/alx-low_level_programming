#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to search
 * @c: char to find
 * Return: char*
 */
char *_strchr(char *s, char c)
{
int i;
char *p;

p = &c;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == *p)

return (s[i]);
}


p = &s[i];

if (s[i] == '\0')
*p = '0';

return (0);
}
