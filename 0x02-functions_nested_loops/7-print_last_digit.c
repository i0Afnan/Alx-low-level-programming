#include "main.h"

/**
 * print_last_digit - a function to print the last digit.
 *
 * @n: passed value
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = -1 * (n % 10);
	}
	else
	{
		digit = n % 10;
	}
	_putchar(digit + '0');
	return (digit);
}
