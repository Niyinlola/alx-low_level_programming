#include "main.h"
#include <stdio.h>
/**
 *reverse_array - writes a function that reverses
 *the content of an array of integer
 *@a: input pointer to array
 *@n: number of elements of the array
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int x, b, c;

b = 0;
c = n - 1;
while (b < c)
{
	x = a[b];
	a[b] = a[c];
	a[c] = x;
	b++;
	c--;
}
}

