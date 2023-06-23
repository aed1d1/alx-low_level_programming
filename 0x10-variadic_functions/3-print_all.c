#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	int b;
	va_list arg;
	char *d;
	char *separator = "";

	va_start(arg, format);
	while (format && format[i])
	{
		b = 0;
		switch (format[a])
		{
			case 'c':
			printf("%s%c", separator, va_arg(arg, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(arg, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(arg, double));
			break;
			case 's':
			d = va_arg(arg, char *);
			if (d == NULL)
				d = "(nil)";
			printf("%s%s", separator, d);
			break;
			default:
			b++;
			break;
		}
		if (b == 0)
			separator = ", ";
		a++;
	}
	printf("\n");
	va_end(arg);
}
