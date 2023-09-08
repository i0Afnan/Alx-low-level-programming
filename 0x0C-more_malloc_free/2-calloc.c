#include "main.h"
#include "0-memset.c"

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
