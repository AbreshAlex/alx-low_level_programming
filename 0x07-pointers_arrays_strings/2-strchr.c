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

}

