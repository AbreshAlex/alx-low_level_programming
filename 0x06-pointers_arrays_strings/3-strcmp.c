#include "main.h"

/**
 * _strcmp - a fun that compares 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, k;

for (; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
;

if (s1[i] == s2[j])
{
k = 0;
}
else if (s1[i] == '\0')
{
k = -15;
}
else
{
k = 15;
}

return (k);
}
