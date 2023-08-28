#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: first occurence of c in s or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *s >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
