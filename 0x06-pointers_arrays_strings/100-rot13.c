#include "main.h"

/**
 * rot13 - the encoder
 * @s: pointer to string
 * Return: String
 */

char *rot13(char *s)
{
	int a;
	int b;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char srot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s1[b] != '\0'; b++)
		{
			if (s[a] == s1[b])
			{
				s[a] == srot[b];
				break;
			}
		}
	}
	return (s);
}
