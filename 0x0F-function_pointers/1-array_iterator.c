#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *@array: array of values
 *@size: the size of the array
 *@action: is the pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && action != NULL)
		return;

	for (a = 0; size > 0 && a < size; a++)
	{
		action(array[a]);
	}
}
