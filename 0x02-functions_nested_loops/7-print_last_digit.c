#include "main.h"

/**
 * print_last_digit - It prints the last two digits.
 * @n: The number
 * Return: value of the last two digits
 */

int print_last_digit(int n)
{
	int lst;

	lst = n % 10
		if (lst < 0)
		{
			lst = lst * -1;
		}
	_putchar(lst + '0');
	return (lst);
}
