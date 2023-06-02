#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int a;

	for (a = 0; a <= 7; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}
