#include "main.h"
/**
 * prime_num - checks if an input is a prime number
 * @n: input
 * @y: iterator
 * Return: 1 if n is prime number 0 if otherwise
 */
int prime_num(unsigned int n, unsigned int y)
{
	if (n % y == 0)
	{
		if (n == y)
			return (1);
		else
			return (0);
	}
	return (0 + prime_num(n, y + 1));
}

/**
 * is_prime_number - checks if an input number is a prime number.
 * @n: input
 * Return: 1 if n is a prime number. 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_num(n, 2));
}
