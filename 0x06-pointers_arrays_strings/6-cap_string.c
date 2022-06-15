#include "main.h"

/**
 * cap_string - capitalizes all words
 * @c: string
 * Return: string
 */
char *cap_string(char *c)
{
int i = 0;

if ('a' <= c[0] && c[0] <= 'z')
c[0] = c[0] - 32;

for (; c[i] != '\0'; i++)

if ('a' <= c[i] && c[i] <= 'z' &&
(c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n' ||
c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.' || c[i - 1] == '!'
|| c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '(' ||
c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}'))

c[i] = c[i] - 32;


return (c);
}
