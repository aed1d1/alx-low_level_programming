#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

		for (a = 0; a < n; a++)
			s[a] = b;
		return (s);
}
