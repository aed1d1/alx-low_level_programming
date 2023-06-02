#include "main.h"

/**
 * _abs - It computes the absolute value of an integer
 * @a: parameter with the integer
 * Return: Absolute value of the integer
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
