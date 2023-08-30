#include "main.h"

int actual_prime(int d, int i);

/**
 * is_prime_number - check prrime number
 * @d: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int d)
{
	if (d <= 1)
		return (0);
	return (actual_prime(d, d - 1));
}

/**
 * actual_prime - calculatE prime rec
 * @d: number to
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int d, int i)
{
	if (i == 1)
		return (1);
	if (d % i == 0 && i > 0)
		return (0);
	return (actual_prime(d, i - 1));
}

