#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int p;

	for (n = 0; n < 9; n++)
	{
		for (p = (n + 1); p <= 9; p++)
		{
		putchar('0' + n);
		putchar('0' + p);
		if ((n * 10) + p != 89)
		{   putchar(',');
			putchar(' ');
		}}}
	putchar('\n');
	return (0);
}
