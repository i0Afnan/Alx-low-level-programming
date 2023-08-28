#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: characters to find
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
