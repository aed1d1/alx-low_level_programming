#include "main.h"

/**
 * _strncat - It concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the number of bytes to be appended
 * Return: pointer to the result
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];
	return (dest);
}
