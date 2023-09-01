#include "main.h"

/**
 * _strcmp - a function to compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if the strings are the same, <0 or >0 if the values are different
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, f = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			f = ((int)s1[i] - 48) - ((int)s2[i] - 48);
			break;
		}
		i++;
	}
	return (f);
}
