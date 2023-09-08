#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 *
 * Return: combined strings into s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[size1] != '\0'; size1++)
		;

	for (; s2[size2] != '\0'; size2++)
		;

	p = malloc(size1 + n + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (; s1[i] != '\0'; i++)
		p[i] = s1[i];

	while (j < n)
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';
	return (p);
}

