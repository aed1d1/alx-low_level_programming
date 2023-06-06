#include "main.h"

/**
 * print_chessboard - It prints a chessboard
 * @a: chessboard  in multiarray format
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (c = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}}
