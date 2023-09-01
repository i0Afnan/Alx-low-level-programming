#include "main.h"

/**
  * *_strncat - A function to concatenate two strings
  *
  * @dest: String to get add to
  *
  * @src: String to add
  *
  * @n: index of character
  *
  * Return: One string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i]; i++)
		;

	for (; src[j] && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}

