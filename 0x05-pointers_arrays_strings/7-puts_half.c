#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of the string
 *
 * @str: string to be printed
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int size, i, n;

	size = _strlen(str);
	n = (size - 1) / 2;

	if ((size - 1) % 2 != 0)
	{
		for (i = n + 1; i < size; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
