#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Start printing from this number
 * Return: 0 Always
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
	{
		if (n == 98)
		{
			_putchar(n);
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	}
	else
	{
		for (n = 0; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
