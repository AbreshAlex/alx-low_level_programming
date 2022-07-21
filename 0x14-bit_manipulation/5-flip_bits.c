#include "main.h"

/**
 * flip_bits - return num of bit to flip to get one num to another
 * @m: decimal num
 * @n: decimal num
 * Return: num of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, flip = 0;

	dif = n ^ m;

	while (dif != 0)
	{
		if ((dif & 1) == 1)
			flip++;
		dif = dif >> 1;
	}
	return (flip);
}
