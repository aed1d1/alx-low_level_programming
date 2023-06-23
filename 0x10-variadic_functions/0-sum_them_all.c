#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * Return: the sum of all parameters or 0 on error.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int a;
	unsigned int sum = 0;

	va_start(ab, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ab);
	return (sum);
}
