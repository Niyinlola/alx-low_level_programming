#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
{
	if (c != 101 && c != 113)
	putchar(c);
}
	putchar('\n');

	return (0);
}
