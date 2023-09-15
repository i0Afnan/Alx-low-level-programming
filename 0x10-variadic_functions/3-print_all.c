#include "variadic_functions.h"

/**
 * print_ch - function to print a character
 *
 * @dt: character passed
 *
 * Return: nothing
 */
void print_ch(va_list dt)
{
	printf("%c", va_arg(dt, int));
}

/**
 * print_int - function to print an integer
 *
 * @dt: integer passed
 *
 * Return: nothing
 */
void print_int(va_list dt)
{
	printf("%d", va_arg(dt, int));
}

/**
 * print_float - function to print a float
 *
 * @dt: float passed
 *
 * Return: nothing
 */
void print_float(va_list dt)
{
	printf("%f", va_arg(dt, double));
}

/**
 * print_str - function to print a string
 *
 * @dt: string passed
 *
 * Return: nothing
 */
void print_str(va_list dt)
{
	char *str = va_arg(dt, char *);
	printf("%s", str == NULL ? "(nil)" : str);
}

/**
 * print_all - a function that prints anything
 *
 * @format: list of types of arguments passed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{

	int i = 0, j;
	char *separator = "";
	va_list dt;

	print_t print[] = {
		{"c", print_ch},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(dt, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != print[j].printl[0])
			++j;
		if (j < 4)
		{
			printf("%s", separator);
			print[j].f(dt);
			separator = ", ";
		}
		++i;
	}
	printf("\n");
	va_end(dt);
}
