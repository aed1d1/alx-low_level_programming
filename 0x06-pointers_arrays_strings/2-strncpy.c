#include "main.h"

/**
 * _strncpy - It copies inputted number of bytes,
 * at most from string src to dest
 * @src: Source string
 * @dest: buffer storing coping string
 * @n: maximum number of bytes to copy
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
