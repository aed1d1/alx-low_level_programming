#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: it points to the main string
 * @accept: points to string used for checking
 * Return: pointer from first occurence, or null if none
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a], a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
