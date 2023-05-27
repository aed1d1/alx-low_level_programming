#include "main.h"

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);

	_putchar('\n');
}
