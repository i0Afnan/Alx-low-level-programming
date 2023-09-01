#include "main.h"

/**
 * *_memcpy - a function to copy memory area
 *
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: size of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
