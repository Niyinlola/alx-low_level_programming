#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		y = -n;
		_putchar('-');
	}
	else
	{
		y = n;
	}

	if (y / 10)
	{
		print_number(y / 10);
	}

	_putchar((y % 10) + '0');
}
