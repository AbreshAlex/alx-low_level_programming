#include "main.h"

/**
 * _pow_recursion - calculates x raised to y
 * @x: number
 * @y: number
 * Return: -1 or x raised to y
 */
int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}

if (y == 1)
{
return (x);
}

return (x * _pow_recursion(x, y - 1));
}
