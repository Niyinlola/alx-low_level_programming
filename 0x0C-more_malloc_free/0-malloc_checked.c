#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that  allocates memory using malloc
 * @b: bytes size
 * Return: pointer to the allocated memory if fails, terminate
 * with the value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}