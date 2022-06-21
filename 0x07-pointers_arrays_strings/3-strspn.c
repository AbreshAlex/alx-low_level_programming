#include "main.h"

/**
 * _strspn - locate character in string
 * @s: string to be scanned
 * @accept: characters to match in string
 * Return: return count
 **/
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, z = 0;
char *s1, *accept1;

s1 = s;
accept1 = accept;

while (s1[i] != '\0')
{
j = 0;
while (accept1[j] != '\0')
{
if (accept1[j] == s1[i])
{
z++;
break;
}
j++;
}
if (s[i] != accept[j])
{
break;
}
i++;
}

return (z);
}
