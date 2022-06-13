#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * 98, 402, -198, 298, -1024
 * @a: array eith the elements
 * @n: the number of elements
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
printf("%d, ", a[i]);

if (i == n - 1)
printf("%d", a[i]);

printf("\n");
}
