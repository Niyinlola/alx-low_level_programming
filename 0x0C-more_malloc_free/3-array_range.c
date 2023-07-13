#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the address
 * NULL if fails
 */
int *array_range(int min, int max)
{
	int y, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
	{
		array[y] = min;
		min++;
	}
	return (array);
}
