#include "main.h"

/**
 * _strcmp - Compares two stringa
 * @s1: first string
 * @s2: second string
 * Return: if str1 > str2, the positive difference of the first
 * unmatched characters. If str1 == str2, 0. If str1 < str2, the
 * negative difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
