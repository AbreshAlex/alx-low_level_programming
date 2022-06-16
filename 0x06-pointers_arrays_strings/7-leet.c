#include "main.h"

/**
 * leet - makes a leet
 * @c: string
 * Return: string
 */
char *leet(char *c)
{
int i = 0, j;
char A[6] = "AEOTL";
char a[6] = "aeotl";
char n[6] = "43071";

for (; c[i] != '\0'; i++)
{
for (j = 0; A[j] != '\0' && a[j] != '\0'; j++)
{
if (c[i] == A[j] || c[i] == a[j])
c[i] = n[j];
}
}



return (c);
}
