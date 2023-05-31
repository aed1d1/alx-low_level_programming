#include "main.h"

/**
 * _strlen - it returns the length of a string
 * @s: points to the memory
 * Return: length of string
 */

int_strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}    return (n);
}
