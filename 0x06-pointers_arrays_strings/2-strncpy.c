#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: string to copy to
 *
 * @src: source of string
 *
 * @n: index
 *
 * Return: coppied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] && i < n; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
