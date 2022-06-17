#include "main.h"

/**
 * *rot13 - a fun that 13 rotates a string
 * @c: source string
 * Return: string
 */

char *rot13(char *c)
{
int i, j;
char A[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char a[27] = "abcdefghijklmnopqrstuvwxyz";

for (j = 0; c[j] != '\0'; j++)
for (i = 0; i < 27; i++)
{
if ((c[j] == A[i] || c[j] == a[i]) && (((i <= 12))))
{
c[j] = c[j] + 13;
}
else if ((c[j] == A[i] || c[j] == a[i]) && (((i > 12))))
{
c[j] = c[j] - 13;
}
}

return (c);
}
