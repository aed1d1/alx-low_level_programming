#include "main.h"

/**
 * string_toupper - Changes all lower case to upper case
 * @str: String to be modified
 * Return: A pointer to the modified string
 */

char *string_toupper(char *str)
{
	int alp = 0;

	while (str[alp])
	{
		if (str[alp] >= 'a' && str[alp] <= 'z')
			str[alp] -= 32;
		alp++;
	}
	return (str);
}
