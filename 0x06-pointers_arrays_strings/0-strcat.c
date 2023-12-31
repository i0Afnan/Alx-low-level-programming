#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest: First string
 *
 * @src: Second string
 *
 * Return: one string
 */
char *_strcat(char *dest, char *src)
{
	int size, n;

	size = 0;
	while (dest[size])
	{
		size++;
	}

	for (n = 0; src[n]; n++)
	{
		dest[size + n] = src[n];
	}
	dest[size + n] = '\0';
	return (dest);
}
