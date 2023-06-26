#include "main.h"
/**
 * print_rev - A function that prints a string, in reverse
 * followed by a new line
 * @s: input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int rev = 0;
	int y;

	while (*s != '\0')
	{
		rev++;
		s++;
	}
	s--;
	for (y = rev; y > 0; y--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
