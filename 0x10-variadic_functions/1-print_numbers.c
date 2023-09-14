#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - a function to print numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: numbers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;
	int nums;

	va_start(num, n);

	for (; i < n; i++)
	{
		nums = va_arg(num, int);
		printf("%d", nums);

		if (separator != NULL && i < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
}
