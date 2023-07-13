#include <stdlib.h>
#include "main.h"
/**
 * _realloc - a function that reallocate a memory block
 * @ptr: old pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to newly allocated memory, NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		free(ptr);
		return (ptr1);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	ptr2 = ptr;

	for (y = 0; y < old_size; y++)
		ptr1[y] = ptr2[y];

	free(ptr);
	return (ptr1);
}
