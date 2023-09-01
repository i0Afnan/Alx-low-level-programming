#include "main.h"

/**
 * *_strstr - a function to locate a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: the beginning of substring, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	for (; haystack[i]; i++)
	{
		j = 0;
		while (needle[j] && haystack[j + i])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}

		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
