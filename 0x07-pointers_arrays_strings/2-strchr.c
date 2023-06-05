#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: first input
 * @c: second input
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
