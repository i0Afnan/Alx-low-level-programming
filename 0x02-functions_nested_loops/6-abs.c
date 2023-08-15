#include "main.h"

/**
 * _abs - a funtion to compute the absolute value of an integer.
 *
 * description: turn a negative value into positive one.
 *
 * @n: passed value to be converted.
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= (-1);
	}
	return (n);
}
