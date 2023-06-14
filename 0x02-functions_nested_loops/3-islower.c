#include "main.h"

/**
 * _islower - it checks for lowercase
 * @c: The character
 * Return: 1, if it is lowercase and 0, if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
