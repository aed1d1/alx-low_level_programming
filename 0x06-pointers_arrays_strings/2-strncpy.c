#include "main.h"

/**
 * _strncpy - It copies inputted number of bytes,
 * at most from string src to dest
 * @src: Source string
 * @dest: buffer storing copied string
 * @n: maximum number of bytes to copy
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	/* counting the length of the 2 strings*/
	for (a = 0; *(src + a) != 0; a++)
	{}
	for (c = 0; *(dest + c) != 0; c++)
	{} c--;

	if (a < n)
	{
		for (b = 0; b < a; b++)
			*(dest + b) = *(src + b);
		if (c < a)
			*(dest + b) = '\0';
		else
		{
			for (b = a; b < n; b++)
				*(dest + b) = '\0';
		}
	}
	
	else
	{
		for (b = 0; b < n; b++)
			*(dest + b) = *(src + b);
		if (c < a)
			*(dest + b) = '\0';
	}
	return (dest);
}
