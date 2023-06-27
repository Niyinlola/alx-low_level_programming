#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords
 * for the program 101-crackme
 * Return: 0 (Success)
 */
int main(void)
{
	int pass[100];
	int y, sum, n;

	sum = 0;

	srand(time(NULL));

	for (y = 0; y < 100; y++)
	{
		pass[y] = rand() % 78;
		sum += (pass[y] + '0');
		putchar(pass[y] + '0');
		if ((2772 - sum) - '0' < 78)
		{
		n = 2772 - sum - '0';
		sum += n;
		putchar(n + '0');
		break;
	}
}

	return (0);
}

