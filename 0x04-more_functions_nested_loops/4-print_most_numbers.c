#include "main.h"
/**
 * print_most_numbers - prints 0 to 9,
 * don't print 2 and 4
 */
void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
	if (y != 2 && y != 4)
	{
	_putchar(y + '0');
	}
	}
	_putchar('\n');
}
