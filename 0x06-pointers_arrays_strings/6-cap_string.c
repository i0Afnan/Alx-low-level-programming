#include "main.h"

/**
 * *cap_string - capitalize all word of a string
 *
 * @s: string
 *
 * Return: capitalized first letter of each word
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(',
	')', '{', '}'};

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (s[i - 1] == sep[j])
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] -= 32;
				}
				else
					continue;
		}
	}
	return (s);
}
