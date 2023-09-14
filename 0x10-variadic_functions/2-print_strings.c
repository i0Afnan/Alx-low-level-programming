#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - a function that prints strings
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *strs;
	va_list str;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(str, n);

	for (; i < n; i++)
	{
		strs = va_arg(str, char *);

		if (!strs)
			printf("(nil)");

		else
			printf("%s", strs);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
