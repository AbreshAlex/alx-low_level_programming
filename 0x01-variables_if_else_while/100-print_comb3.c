#include <stdio.h>

/**
 * main - print comb of 2 dig
 * Return: 0
 */
int main(void)
{
int i, j;

for (i = '0'; i < '8'; i++)
{
for (j = '1'; j <= '9'; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
putchar('8');
putchar('9');
putchar('\n');

return (0);
}
