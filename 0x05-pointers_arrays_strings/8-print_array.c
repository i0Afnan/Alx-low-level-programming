#include "main.h"

/**
 * print_array - prints elements of an array
 *
 * @a: name of the array
 *
 * @n: size of the array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
