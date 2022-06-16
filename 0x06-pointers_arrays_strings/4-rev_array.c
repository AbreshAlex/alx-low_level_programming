#include "main.h"

/**
 * reverse_array - a fun that reverses an array
 * @a: array to reverse
 * @n: number of elements to reverse
 * Return: destination string
 */
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1, k;

while (i < j)
{
k = a[i];
a[i] = a[j];
a[j] = k;
i++;
j--;
}

}
