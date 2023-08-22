#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - print every other character of a string
 *
 * @str: string to be printed
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int size, i;

	size = _strlen(str);

	for (i = 0; i <= size - 1 ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
