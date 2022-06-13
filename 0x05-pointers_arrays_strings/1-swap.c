#include "main.h"

/**
 * swap_int - a fun that swaps 2 int
 * @a: swapped to b
 * @b: swapped to a
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

}
