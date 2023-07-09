#include "main.h"
/**
 * sqr_root - A function that returns the squre root of a number
 * @n: input
 * @y: iterator
 * Return: The square root or -1
 */
int sqr_root(int n, int y)
{
	if (y % (n / y) == 0)
	{
		if (y * (n / y) == n)
		return (y);
	else
		return (-1);
	}
	return (0 + sqr_root(n, y + 1));
}

/**
 * _sqrt_recursion - A function that returns the square root of a number
 * @n: input
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqr_root(n, 2));
}
