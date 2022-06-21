#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to search
 * @c: char to find
 * Return: char*
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
i++;
if (s[i] == c)
{
return (&s[i]);
}
}
return ('\0');

<<<<<<< HEAD

p = &s[i];

if (s[i] == '\0')
p = 0;

return (p);
=======
>>>>>>> 51c3a19d65c753d06d4a59b63a978ea5e5c2a9d0
}

