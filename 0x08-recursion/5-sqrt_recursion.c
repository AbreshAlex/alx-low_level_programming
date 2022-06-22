#include "main.h"

/**
 * getsqrt - returns natural square root of number
 * @n: number
 * @x: number
 * Return: -1 if no natural square root
 */
int getsqrt(int n, int x)
{
if (n == 0)
{
return (0);
}

if (n < 0)
{
return (-1);
}

if (n == 1)
{
return (n);
}

if (x * x == n)
return (x);

if (x * x > n)
return (-1);

return (getsqrt(n, x + 1));

}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number
 * Return: -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
return (getsqrt(n, 1));
}
