#include "main.h"

/**
 * _strcmp - a fun that compares 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, k = 0;

for (; s1[i] != '\0'; i++)
;

for (; s2[j] != '\0'; j++)
;

if (i < j)
k = -15;

if (i > j)
k = 15;

if (i == j)
k = 0;

return (k);
}
