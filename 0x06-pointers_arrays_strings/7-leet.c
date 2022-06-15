#include "main.h"

/**
 * leet - makes a leet
 * @c: string
 * Return: string
 */
char *leet(char *c)
{
int i = 0;

for (; c[i] != '\0'; i++)
while (c[i] == 'a' || c[i] == 'A')
c[i] == '4';



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
