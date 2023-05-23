#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int p;
	int q;

	for (n = 0; n <= 7; n++)
	{
		for (p = (n + 1); p <= 8; p++)
		{
			for (q = (p + 1); q <= 9; q++)
			{
				putchar('0' + n);
				putchar('0' + p);
				putchar('0' + q);
				if ((n * 100) + (p * 10) + q != 89)
				{
					putchar(',');
					putchar(' ');
		}}}}
	putchar('\n');
	return (0);
}
