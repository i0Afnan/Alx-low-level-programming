#include "main.h"

/**
 * sqr - to find square root
 *
 * @num: number to calculate its square root
 * @r : root
 *
 * Return: root value
 */
int sqr(int num, int r)
{
	if (r * r > num)
		return (-1);
	else if ((r * r) == num)
		return (r);
	else
		return (sqr(num, r + 1));
}
/**
 * _sqrt_recursion - returns the natural sqr root of a number
 *
 * @n: given number
 *
 * Return: -1 if n does't have a natural sqr root
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
