#include "main.h"

/**
 * get_bit - return value of bit at index
 * @index: index of bit from 0
 * @n: decimal num
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = 0, m = n;

	for (; m > 0; j++)
		m = m >> 1;
	j--;

	if (index > j)
		return (-1);

	index++;
	for (; index > 0; index--)
	{
		if (index == 1)
		{
			m = n >> 1;

			if ((m << 1) != n)
				return (1);
			else
				return (0);
		}
		n = n >> 1;
	}
	return (-1);
}
