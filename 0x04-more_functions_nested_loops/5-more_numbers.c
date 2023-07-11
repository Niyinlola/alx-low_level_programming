#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: Nothing.
 */
void more_numbers(void)
{
	int y, z;

	for (y = 0; y < 10; y++)
	{
	for (z = 0; z < 15; z++)
	{
		if (z >= 10)
			_putchar(z / 10 + '0');
		_putchar(z % 10 + '0');
	}
	_putchar('\n');
	}
}
