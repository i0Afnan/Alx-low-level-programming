#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonal
 *
 * @a: array
 * @size: size of the array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
