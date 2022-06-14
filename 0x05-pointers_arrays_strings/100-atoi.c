#include "main.h"

/**
 * _atoi - converts a string to a number
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
int i, j;
j = 1;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-' && (s[i + 1] ==
'0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9'))
j = 0 - j;
}






return (j);
}
