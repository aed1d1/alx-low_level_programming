#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the initial segment memory
 * @accept: the memory for comparison
 * Return: Matched bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int n;
	unsigned int value;
	unsigned int check;

	value = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[a])
			{
				value++;
				check = 1;
			}}
		if (check == 0)
		{
			return (value);
		}}
	return (value);
}
