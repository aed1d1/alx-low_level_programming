#include "main.h"

/**
 * _atoi - Converts a string to an int
 * @s: pointer for conversion
 * Return: An integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int ab = 0;
	int mn = 1;
	int mx = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			mn *= -1;
		}
		while (s[a] > 48 && s[a] <= 57)
		{
			mx = 1;
			ab = (ab * 10) + (s[a] - '0');
			a++;
		}
		if (mx == 1)
		{
			break;
		}
		a++;
	}
		ab *= mn;
		return (ab);
}
