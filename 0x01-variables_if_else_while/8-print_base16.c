#include <stdio.h>

/**
 * main - print the hex base
 * Return: 0
 */
int main(void)
{
int i;

for (i = 48; i <= 63; i++)
{
if (i <= 57)
putchar(i);
else
putchar(i + 97 - 58);
}
putchar('\n');

return (0);
}
