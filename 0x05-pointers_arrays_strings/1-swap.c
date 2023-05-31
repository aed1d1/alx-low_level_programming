#include "main.h"

/**
 * swap_int - swaps two integers with another value
 * @a: Integer 1 for swap
 * @b: integer 2 for swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
