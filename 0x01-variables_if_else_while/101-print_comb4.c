#include <stdio.h>

/**
 * main - print comb of 2 dig
 * Return: 0
 */
int main(void)
{
int i, j, k;

for (i = '0'; i < '8'; i++)
{
for (j = i + 1; j < '9'; j++)
{
for (k = i + 2; k <= '9'; k++)
{
putchar(i);
putchar(j);
putchar(k);

if (i == '7' && j == '8' && k == '9')
break;

putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
