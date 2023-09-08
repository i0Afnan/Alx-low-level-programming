#include "main.h"
#include <stdlib.h>

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
	char *p;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		p[i] = 0;


	return (p);
}
