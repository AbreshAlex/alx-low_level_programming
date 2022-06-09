#include "main.h"

/**
 * _isdigit - checks a digit
 * @c: number checked
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
