#include "main.h"

/**
 * count_word - function to count num of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int l = 0, j, k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			l = 0;
		else if (l == 0)
		{
			l = 1;
			k++;
		}}
	return (k);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of str (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **m, *n;
	int i, x = 0, y = 0, w, z = 0, d, e;

	while (*(str + y))
		y++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i < y; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (z)
			{
				e = i;
				n = (char *)malloc(sizeof(char) * (z + 1));
				if (n == NULL)
					return (NULL);
				while (d < e)
					*n++ = str[d++];
				*n = '\0';
				m[x] = n - z;
				x++;
				z = 0;
			}}
		else if (z++ == 0)
			d = i;
	}
	m[x] = NULL;
	return (m);
}
