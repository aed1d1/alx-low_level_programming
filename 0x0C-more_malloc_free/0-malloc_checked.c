#include "main.h"

/**
 * malloc_checked - it  allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: the pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
