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
	if ((dest == NULL) && (src == NULL))
		return (NULL);

	while (*dest != '\0')
	{
		dest++;
	}

	while (n--)
	{
		if (*dest++ != *src++)
		{
			return (dest);
		}
	}

	*dest = '\0';
	return (dest);
}

