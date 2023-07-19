#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: points to array
 * @size: The size of the array
 * @cmp: pointer to function that checks index in array
 * Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]))
			return (y);
	}
	return (-1);
}
