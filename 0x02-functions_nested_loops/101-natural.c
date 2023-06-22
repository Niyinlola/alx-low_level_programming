#include <stdio.h>

/**
 * main - Program that computes and print the sum of 3 or 5 below 1024
 * Return: 0 (Success)
 */
int main(void)
{
	long unsigned int num3 = 0;
	long unsigned int num5 = 0;
	long unsigned int sum = 0;
	long unsigned int y;

	for (y = 0; y < 1024; y++)
	{
	if ((y % 3) == 0)
	{
	num3 = num3 + y;
	}
	else if ((y % 5) == 0)
	{
	num5 = num5 + 1;
	}
	}
	sum = num3 + num5;
	printf("%lu\n", sum);
	return (0);
}
