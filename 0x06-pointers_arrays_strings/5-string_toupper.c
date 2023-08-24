#include "main.h"

/**
 * *string_toupper - changes all lower case to upper case
 *
 * @c: string to be changed
 *
 * Return: Upper case letters
 */
char *string_toupper(char *c)
{
	int i = 0, s = 0;

	while (c[s] != '\0')
		s++;

	for (; i < s - 1; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	}
	return (c);
}
