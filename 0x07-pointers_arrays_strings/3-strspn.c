#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: character strings to find
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j, k;

for (j = 0; accept[j] != '\0'; j++)
{
for (k = 0; s[k] != '\0'; k++)
{
if ((accept[j] == s[k]) && (k > i))
{
i = k + 1;
/*break;*/
}
if (k < i)
break;
}
}

return (i);
}
