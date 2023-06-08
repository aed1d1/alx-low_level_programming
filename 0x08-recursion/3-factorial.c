#include "main.h"

/**
 * factorial - it returns the factorial of a given number.
 * @n: the number to be computed.
 * Return: factorial on success, or -1 on error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
