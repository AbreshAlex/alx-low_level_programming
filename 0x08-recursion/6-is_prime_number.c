#include "main.h"

/**
 * primenum - checks if prime num
 * @n: number to check
 * @x: number divide by
 * Return: 0 if not prime num otherwise 1
 */
int primenum(int n, int x)
{
int i;

if (n <= 1)
return (0);

if (x == n)
return (1);

if (n % x != 0)
{
i = primenum(n, x + 1);
return (i);
}

return (0);

}

/**
 * is_prime_number - checks if prime num
 * @n: number to check
 * Return: 0 if not prime num otherwise 1
 */
int is_prime_number(int n)
{
return (primenum(n, 2));
}
