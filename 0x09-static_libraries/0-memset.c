#include "main.h"

/**
 * *_memset - a function to fill memory with constant byte.
 *
 * @s: pointer
 *
 * @b: constant byte
 *
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
