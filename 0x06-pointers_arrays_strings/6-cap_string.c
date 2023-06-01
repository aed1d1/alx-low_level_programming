#include "main.h"

/**
 * cap_string - Capitalize all words in a string
 * @str: the string
 * Return: Pointer to the modified string
 */

char *cap_string(char *)
{
	int i;

	for (i = 0; n[i] != 0; i++)
	{
		if (n[i] >= 97 && n[i] <= 122 && i != 0)
		{
			if (n[i - 1] == ' ' || n[i - 1] == '\t' || n[i - 1] == '\n')
				n[i] = n[i] - 32;
			else if (n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '.')
				n[i] = n[i] - 32;
			else if (n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"')
				n[i] = n[i] - 32;
			else if (n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{')
				n[i] = n[i] - 32;
			else if (n[i - 1] == '}')
				n[i] = n[i] - 32;
		}
		else if (n[i] >= 97 && n[i] <= 122 && i == 0)
			n[i] = n[i] - 32;
	}
	return (n);
}
