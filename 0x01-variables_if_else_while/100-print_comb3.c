#include <stdio.h>

/**
 * main - print comb of 2 dig
 * Return: 0
 */
int main(void)
{
int i, j;

for (i = '0'; i < '9'; i++)
{
for (j = '1'; j <= '9'; j++)
{
putchar(i);
putchar(j);

if (i == '8' && j == '9')
break;

putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
