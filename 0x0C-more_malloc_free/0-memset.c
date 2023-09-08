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
	char *pr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (pr);
}
