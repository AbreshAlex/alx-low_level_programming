#include "main.h"

/**
 * print_number - a fun that prints an integer
 * @n: number
 * Return: destination string
 */
void print_number(int n)
{
int i = 10, j = 0;
int k = 1, l = 0, m = 0;

if (n < 0)
_putchar('-');

if (n == 0)
_putchar('0');

while ((n / k) != 0)
{
k *= i;
++j;
}

k = k / 10;

for (; k != 1; l++)
{
m = n / k;

if (m > 9 || m < -9)
m = m % 10;

_putchar('m');
k /= i;
}

/*printf("Answer = %.0Lf", k);
return 0;*/
}
