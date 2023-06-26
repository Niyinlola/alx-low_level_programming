#include "main.h"
/**
 * puts2 - A function that prints every other character of a string
 * starting with the first character
 * @str: input string
 * Return: Nothing
 */
void puts2(char *str)
{
	char *x = str;
	int y = 0;
	int z = 0;
	int w;

	while (*x != '\0')
	{
		x++;
		y++;
	}
	z = y - 1;
	for (w = 0; w <= z; w++)
	{
		if (w % 2 == 0)
	{
		_putchar(str[w]);
	}
	}
	_putchar('\n');
}
