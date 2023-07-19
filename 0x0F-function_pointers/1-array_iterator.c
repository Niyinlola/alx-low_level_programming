#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function given as a parameter
 * on each element of an array.
 * @array: an array of  element
 * @size: size of the array
 * @action: points to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int func;

	if (array != NULL && size > 0 && action != NULL)
		for (func = 0; func < size; func++)
			action(array[func]);
}
