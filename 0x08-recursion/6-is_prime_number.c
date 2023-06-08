#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - return if it is a prime number
 * @n: the number to be checked
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if it is a prime number
 * @n: number to be checked
 * @i: iteration times
 * Return: 1 for prime and 0 for compromise
 */

int check_prime(int n, int i)
{
	if (n<= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + i));
}
