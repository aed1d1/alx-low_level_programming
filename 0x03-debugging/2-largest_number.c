#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: If successful, largest number
 */

int largest_number(int a, int b, int c)
{
	int L;

	if (a > b && b > c)
	{
		L = a;
	}
	else if (b > a && a > c)
	{
		L = b;
	}
	else if (a > c && c > b)
	{
		L = a;
	}
	else if (b > c && c > a)
	{
		L = b;
	}
	else
	{
		L = c;
	}

	return (largest);
}
