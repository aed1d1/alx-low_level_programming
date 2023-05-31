#include "main.h"

/**
 * _atoi - Converts a string to an int
 * @s: pointer for conversion
 * Return: An integer
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int i = 0;

	while (s[c] != '\0')
		c++;

	while (i < c && d == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			e = s[i] - '0';
			if (a % 2)
				e = -e;
			b = (b * 10 + e);
			d = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			d = 0;
		}    i++;
	}    if (d == 0)
		return (0);
	return (b);
}
