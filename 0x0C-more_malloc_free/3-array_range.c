#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: The first value of the array.
 * @max: The last value of the array.
 * Return: a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *a;
	int b;
	int c;

	if (min > max)
		return (NULL);

	c = max - min + 1;

	a = malloc(sizeof(int) * c);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < c; b++)
		a[b] = min++;

	return (a);
}
