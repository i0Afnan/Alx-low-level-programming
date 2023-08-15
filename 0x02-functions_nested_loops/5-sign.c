#include "main.h"

/**
 * print_sign - a funtion to detect the sign of the number.
 *
 * @n: the value passed by the function print_sign.
 *
 * Return: 1 if n is greater than 0, 0 if n is zero, and -1 if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
