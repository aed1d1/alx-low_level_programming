#include "main.h"

/**
 * _strncpy - It copies inputted number of bytes,
 * at most from string src to dest
 * @src: Source string
 * @dest: buffer storing copied string
 * @n: maximum number of bytes to copy
 * Return: A pointer to the resulting string dest.
 */

char _*strncpy(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (src[index++])
		len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
