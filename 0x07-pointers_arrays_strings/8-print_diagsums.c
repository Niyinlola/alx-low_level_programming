#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: input pointer to the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int y, mtrx1, mtrx2;

	mtrx1 = 0;
	mtrx2 = 0;

	for (y = 0; y < (size * size); y++)
	{
		if (y % (size + 1) == 0)
			mtrx1 += a[y];
		if (y % (size - 1) == 0 && y != 0 && y < size * size - 1)
			mtrx2 += a[y];
	}
	printf("%d, %d\n", mtrx1, mtrx2);
}
