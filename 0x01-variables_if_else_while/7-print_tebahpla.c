#include <stdio.h>

/**
 * main - print az in reverse only putchar
 * Return: 0
 */
int main(void)
{
char za;

for (za = 'z'; za >= 'a'; za--)
putchar(za);
putchar('\n');

return (0);
}
