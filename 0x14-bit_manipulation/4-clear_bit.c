#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @index: index of bit from 0
 * @n: decimal num
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int length, dec = *n;

	for (length = 0; dec > 0; length++)
		dec >>= 1;
	length--;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	if (index > length)
		return (1);

	*n = *n & ~(1 << index);
	return (1);
}
