#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to find length
 * Return: length
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (*s == '\0')
{
return (0);
}

if (*s != '\0')
{

i = i + 1 + _strlen_recursion(s + 1);

}

return (i);
}
