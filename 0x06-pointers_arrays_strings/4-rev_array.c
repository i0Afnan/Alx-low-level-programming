#include "main.h"

/**
 * reverse_array - a function that revereses the content of an array
 *
 * @a: Array of integers
 *
 * @n: Number of elemnt of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int tmp = 0, i;

	for (i = 0; i <= n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
