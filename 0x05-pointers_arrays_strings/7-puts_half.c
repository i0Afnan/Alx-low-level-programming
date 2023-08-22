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

	i = n + 1;
	while (i < size)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
