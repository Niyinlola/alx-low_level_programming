#include "main.h"
/**
 * print_array - A function that prints n elements of an array of integers
 * @a: input name of array
 * @n: input number of element of array
 * Return: input
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d, ", a[y]);
	}
	if (y == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
