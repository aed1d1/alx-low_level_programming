#include "main.h"

/**
 * print_sign - It prints the sign of a number
 * @n: The number
 * Return: 1 if number positive, -1 if number
 * negative or 0 for anything else
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}}
