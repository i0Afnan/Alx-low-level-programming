#include "main.h"
#include <stdlib.h>

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

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: array
 * @size: size of the array
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
