#include "main.h"

/**
 * _strlen - a fun that returns the length of a string
 * excluding the terminating null byte ('\0')
 * @s: string to be measured
 * Return: the length
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;

return (i);
}
