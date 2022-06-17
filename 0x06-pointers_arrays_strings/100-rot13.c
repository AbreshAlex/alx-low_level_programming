#include "main.h"

/**
 * *rot13 - a fun that 13 rotates a string
 * @c: source string
 * Return: string
 */

char *rot13(char *c)
{
int i, j;
char A[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char a[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (j = 0; c[j] != '\0'; j++)
for (i = 0; i < 53; i++)
if (c[j] == A[i])
{
c[j] = a[i];
break;
}

return (c);
}
