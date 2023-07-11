#include <stdio.h>
#include <math.h>

/**
 * main - a program that finds and prints the largest
 * prime factor of the number 612852475143
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	long int y;
	long int num;
	long int max;

	num = 612852475143;
	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}

	for (y = 3; y <= sqrt(num); y = y + 2)
	{
		while (num % y == 0)
		{
			max = y;
			num = num / y;
		}
	}

	if (num > 2)
		max = num;

	printf("%ld\n", max);

	return (0);
}
