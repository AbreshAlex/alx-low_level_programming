#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j = 0, k = 0, l = 0;

j = (size * size) - 1;

for (i = 0; i <= j; i = i + (size + 1))
{
k = k + a[i];
}
for (i = (size - 1); i < j; i = i + (size - 1))
{
l = l + a[i];
}
printf("%d, %d\n", k, l);

return;
}
