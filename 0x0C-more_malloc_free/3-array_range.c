#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int s, i = 0;
	int *p;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	p = malloc(sizeof(int) * s);

	if (!p)
		return(NULL);
	for (; i < s; i++)
		p[i] = min++;
	return (p);
}
