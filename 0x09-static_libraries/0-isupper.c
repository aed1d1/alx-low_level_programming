#include "main.h"

/**
 * _isupper - this function that checks for uppercase letter
 * @c: char to be checked
 * Return: 1 if char is UPPERCASE, or 0 if it is lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
