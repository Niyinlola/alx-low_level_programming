#include <stdlib.h>
#include "main.h"
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array to create.
 * @c: char to initialize the array c.
 * Return: pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int y = 0;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (0);
	while (y < size)
	{
		*(ptr + y) = c;
		y++;
	}
	*(ptr + y) = '\0';
	return (ptr);
}
