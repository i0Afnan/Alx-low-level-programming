#include "variadic_functions.h"

/**
 * sum_them_all - Sums all of its parameter
 *
 * @n: first argument of type integer
 *
 * Return: result, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (; i < n; i++)
		result += va_arg(arg, int);

	va_end(arg);
	return (result);
}
