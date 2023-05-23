#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
			putchar('0' + n);
		else
			putchar(tolower('A' + (n % 10)));
	}
	putchar('\n');
	return (0);
}
