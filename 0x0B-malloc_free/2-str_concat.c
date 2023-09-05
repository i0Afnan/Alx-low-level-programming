#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: string, Null otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, j = 0;
	char *con;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	for (; s1[size1] != '\0'; size1++)
		;

	for (; s2[size2] != '\0'; size2++)
		;

	con = malloc((size1 + size2) * sizeof(char) + 1);

	if (con == NULL)
		return (NULL);

	for (; j <= size1 + size2; j++)
	{
		if (j < size1)
		{
			con[j] = s1[j];
		}

		else
			con[j] = s2[j - size1];

	}
	con[j] = '\0';
	return (con);
}
