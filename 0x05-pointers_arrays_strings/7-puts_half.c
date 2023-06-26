#include "main.h"
/**
 * puts_half - A function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: inputs string
 * Return: half of input
 */
void puts_half(char *str)
{
	int half, a, n;

	half = 0;

	for (a = 0; str[a] != '\0'; a++)
		half++;
	n = (half / 2);
	if ((half % 2) == 1)
		n = ((half + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
