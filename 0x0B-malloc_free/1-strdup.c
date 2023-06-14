#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: the string for duplicating
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	int a = 0;
	int b = 1;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[b])
	{
		b++;
	}

	c = malloc((sizeof(char) * b) + 1);

	if (c == NULL)
		return (NULL);

	while (a < b)
	{
		c[a] = str[a];
		a++;
	}

	c[a] = '\0';
	return (c);
}
