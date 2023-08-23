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
	int size;

	while (*dest != '\0')
	{
		size++;
		dest++;
	}

	for (; *src <= '\0'; src++)
	{
		dest[size] = *src;
		size++;
	}
	return (dest);
}
