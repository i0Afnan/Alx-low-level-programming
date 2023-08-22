#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse string
 *
 * @s: string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int size;
	int j;
	char tmp;

	size = _strlen(s);

	for (j = 0; j < size; j++)
	{
		tmp = s[size - 1];
		s[size - 1] = s[j];
		s[j] = tmp;
		size--;
	}
}
