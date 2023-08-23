#include "main.h"
#include "_putchar.c"

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
	int size = 0, n = 0;

	while (dest[size])
	{
		size++;
	}

	for (; src[n]; n++)
	{
		dest[size++] = src[n];
	}
	return (dest);
}
