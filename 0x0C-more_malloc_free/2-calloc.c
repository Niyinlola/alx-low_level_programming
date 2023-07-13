#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - constant byte function
 * @s: input
 * @b: characters
 * @n: number of bytes
 * Return: pointer to the input area
 */
char *const_mem(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		s[y] = b;
	return (s);
}

/**
 * _calloc - This function allocates memory for an array using malloc
 * @nmemb: size of array
 * @size: size of element
 * Return: pointer with new memory, NULL failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	const_mem(ptr, 0, nmemb * size);

	return (ptr);
}
