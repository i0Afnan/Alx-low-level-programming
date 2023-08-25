#include "main.h"

/**
 * lower - check if the letter is in lowercase
 *
 * @l: letter
 *
 * Return: 1 if letter is lowercase and 0 otherwise
 */
static int lower(int l)
{

	return (l >= 97 && l <= 122);

}

/**
 * sep - detects seperator
 *
 * @p: char to detect
 *
 * Return: 1 for sep 0 for none
 */
static int sep(char p)
{
	return (p == ',' || p == ';' || p == '.' || p == '!' || p == '?' ||
			p == '"' || p == '(' || p == ')' || p == '{' ||
			p == '}' || p == ' ' || p == '\n' || p == '\t');
}

/**
 * *cap_string - capitalize all word of a string
 *
 * @s: string
 *
 * Return: capitalized first letter of each word
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
		if (i == 0 || sep(s[i - 1]))
			(lower(s[i])) ? s[i] -= 32 : 0;

	return (s);
}
