#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 *
 * @str: string to be printed
 *
 * Return: nothing
 */
void print_rev(char *str)
{
	int i;

	i = _strlen(str);

	for (i = i - 1; i > 0; i--)
	{
	_putchar(str[i]);
	}
	 _putchar('\n');
}
