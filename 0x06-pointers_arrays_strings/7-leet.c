#include "main.h"

/**
 * leet - Converts letters into leet
 *
 * @l: string which letter is converted
 *
 * Return: encoded string
 */
char *leet(char *l)
{
	char *from = "aAeEoOtTlL";
	char *to = "4433007711";
	int i = 0, j;

	while (l[i])
	{
		for (j = 0; from[j]; j++)
		{
			if (l[i] == from[j])
				l[i] = to[j];

		}
		i++;
	}
	return (l);
}
