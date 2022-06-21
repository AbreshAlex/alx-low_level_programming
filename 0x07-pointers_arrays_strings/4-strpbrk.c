#include "main.h"

/**
 * _strpbrk - match a character
 * @s: string scanned
 * @accept:char to match
 * Return: string that match character
 **/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (*s == accept[i])
{
return (s);
}
i++;
}
s++;
}

return (0);
}
