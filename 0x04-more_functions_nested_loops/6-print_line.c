#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int y;

		for (y = 1; y <= n; y++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
