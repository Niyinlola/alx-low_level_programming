#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 *  @s: input pointer to char
 *  @b: input variable of char
 *  @n: the number of bytes to be filled
 *  Return: pointer to the filled memory of @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		s[y] = b;
	return (s);
}
