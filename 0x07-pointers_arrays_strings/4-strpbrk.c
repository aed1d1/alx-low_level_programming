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
	int b;

	for (a = 0; s[a] != \'0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + 1);
		}}
	return (NULL);
}
