#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 *
 * @n: number
 * @m: number
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int n = 0;

	while (flipped)
	{
		flipped &= flipped - 1;
		n++;
	}

	return (n);
}
