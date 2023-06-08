#include "main.h"

/**
 * _strlen_recursion - it returns the length of a string
 * @s: it points to the string
 * Return: the length of the string on success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
