#include "main.h"

/**
 * print_number - prints integer
 * @n: the integer parameters
 * Return: 0
 */

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}

	if (a / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
