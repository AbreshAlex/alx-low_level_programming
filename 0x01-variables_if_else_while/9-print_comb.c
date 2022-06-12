#include <stdio.h>

/**
 * main - print all double dig
 * Return: 0
 */
int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x <= '8')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
