#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: byte to be found
 * Return: char*
 */
char *_strpbrk(char *s, char *accept)
{
char *i;
unsigned int j, k = 0;
i = &s[k];

for (j = 0; accept[j] != '\0'; j++)
for (k = 0; s[k] != '\0'; k++)
if (accept[j] == s[k])
{
if (&s[k] <= i)
i = &s[k];
}



return (i);
}
