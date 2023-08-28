#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: characters to be searched
 *
 * Return: byte in the string. NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
