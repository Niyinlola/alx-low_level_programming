#include "main.h"
/**
 * _memcpy - writes a function that copies memory area
 * @dest: copy to this
 * @src: what we are to copy
 * @n: n bytes of @src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		dest[y] = src[y];
	return (dest);
}
