#include "function_pointers.h"

/**
 * print_name - print name using pointer to function
 * @name: name to add
 * @f: pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
