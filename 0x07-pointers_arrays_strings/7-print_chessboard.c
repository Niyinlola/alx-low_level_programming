#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - A function that  prints chessboard,
 * @a: array of char
 * Return: Empty
 */
void print_chessboard(char (*a)[8])
{
	int y, z;

	y = 0;

	while (y < 8)

	{
		z = 0;

		while (z < 8)
		{
			_putchar(a[y][z]);

			z++;
		}

		_putchar ('\n');
		y++;
	}
}
