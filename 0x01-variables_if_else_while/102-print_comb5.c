#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int p;

	for (n = 0; n <= 98; n++)
	{
		for (p = (n + 1); p <= 99; p++)
		{
			{
				putchar('0' + (n / 10));
				putchar(' ');
				putchar('0' + (n % 10));
				putchar(',');
				putchar('0' + (p / 10));
				putchar('0' + (p % 10));
		}}}
	putchar('\n');
	return (0);
}
