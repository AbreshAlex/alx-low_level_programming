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

for (i = 0; *s != '\0'; s++)
{
if (*s == c)

return (s);
}


return (0);
}
