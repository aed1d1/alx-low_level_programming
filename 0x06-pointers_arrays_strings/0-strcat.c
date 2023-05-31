#include "main.h"

/**
 * _strcat - It concatenate strings
 * @dest: first input value
 * @src: second input value
 * Return: the pointer to the concatenating string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; *(dest + a) != '\0'; a++)
	{}
	for (b = 0; *(src + b) != '\0'; b++)
	{
		*(dest + a) = *(src + b);
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}
