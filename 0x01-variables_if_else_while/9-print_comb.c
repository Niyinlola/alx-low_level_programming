#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		putchar(y + '0');

	if (y != 9)

	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
