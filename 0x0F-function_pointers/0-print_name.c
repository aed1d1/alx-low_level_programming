#include FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - print name using pointer to function
 * @name: name to add
 * @f: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; size > 0 && i < size; i++)
		{
			action(array[i]);
		}}}
