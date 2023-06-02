#include "main.h"

/**
 * print_alphabet - It prints alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);

	_putchar('\n');
}
