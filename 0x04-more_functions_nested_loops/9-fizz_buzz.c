#include "main.h"
#include <stdio.h>

/**
 * main - a programe that prints the numbers from 1 to 100, followed
 * by a new line. But for multiples of three prints Fizz instead of
 * the number and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if (y % 3 == 0 && y % 5 != 0)
		{
			printf(" Fizz");
		} else if (y % 5 == 0 && y % 3 != 0)
		{
			printf(" Buzz");
		} else if (y % 3 == 0 && y % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (y == 1)
		{
			printf(" %d", y);
		} else
		{
			printf(" %d", y);
		}
	}

	printf("\n");

	return (0);
}
