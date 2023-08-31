#include "main.h"

/**
 * _is_prime - check passed number
 *
 * @num: number passed
 * @m: integer
 *
 * Return: number
 */
int _is_prime(int num, int m)
{
	if (num > 1 && m >= num)
	{
		return (1);
	}
	else if (num % m == 0 || num <= 1)
	{
		return (0);
	}
	else
	{
		return (_is_prime(num, m + 1));
	}
}

/**
 * is_prime_number - check for prime number
 *
 * @n: number to be checked
 *
 * Return: 1 if the integer is a prime number
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
