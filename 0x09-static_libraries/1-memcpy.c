#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: area to copy byte
 * @dest: area to paste byte
 * @n: number of bytes to copy
 * Return: point to the destination area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
