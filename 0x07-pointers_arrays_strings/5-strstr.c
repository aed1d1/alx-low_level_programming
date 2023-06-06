#include "main.h"
/**
*_strstr - find the first occurence of a substring into a string
*@haystack: points to the string
*@needle: points to the substring
*Return: from the first occurence of the substring if any
*/
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	for (a = 0; *(haystack + a); a++)
	{
		c = 0;
		for (b = 0; *(needle + b); b++)
		{
			if (*(haystack + a + b) != *(needle + b))
			{
				c = 1;
				break;
			}}
		if (c == 0)
		{
			return (haystack + a);
		}}
	return ('\0');
}
