#include "main.h"

/**
 * factorial - returns factorial of a number
 *
 * @n: number
 * 
 * Return: -1 if n is lower than 0, otherwise print factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (0);

	else if (n == 1)
		return (1);

	else if (n < 0)
		return (-1);

	else
	{
		return (n * factorial(n - 1));
	}
}
