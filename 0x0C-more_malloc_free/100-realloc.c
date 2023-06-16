#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int c;
	char *a;
	char *b;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	a = malloc(new_size);
	if (!a)
		return (NULL);

	b = ptr;

	if (new_size < old_size)
	{
		for (c = 0; c < new_size; c++)
			a[c] = b[c];
	}

	if (new_size > old_size)
	{
		for (c = 0; c < old_size; c++)
			a[c] = b[c];
	}
	free(ptr);

	return (a);
}
