#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be worked on
 * Return: void
 */

void puts(char *str)
{
	int n;
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}

	for (n = 0; n < p; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
