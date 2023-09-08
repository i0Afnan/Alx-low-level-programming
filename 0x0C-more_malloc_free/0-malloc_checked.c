#include "main.h"

/**
 * *malloc_checked - allocates memory using `malloc`
 *
 * @b: number
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
