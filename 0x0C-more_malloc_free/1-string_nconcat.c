#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: maximum number of bytes of s2 to concatenate to s1.
 * Return: if the function fails, return NULL.
 * return tthe pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a = n, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b]; b++)
		a++;

	c = malloc(sizeof(char) * (a + 1));

	if (c == NULL)
		return (NULL);

	a = 0;

	for (b = 0; s1[b]; b++)
		c[a++] = s1[b];

	for (b = 0; s2[b] && b < n; b++)
		c[a++] = s2[b];

	c[a] = '\0';

	return (c);
}
