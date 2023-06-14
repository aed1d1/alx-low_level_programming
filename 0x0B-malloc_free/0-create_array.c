#include "main.h"

/**
 * create_array - creates an array of char
 * @size: The size
 * @c: The char for filling the array
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}

	return (b);
}
