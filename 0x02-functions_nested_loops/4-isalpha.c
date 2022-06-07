#include "main.h"

/**
 *_isalpha - Entry
 *@c: Input To Verify
 * Return: 1 Or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
