#include "main.h"

/**
 * *_strcpy - copy the pointed string
 *
 * @dest: Destination
 *
 * @src: The string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}