#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: number of command line arguments.
 * @argv: array that contain the command line arguments.
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int kobo, naira = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	kobo = atoi(argv[1]);
	while (kobo > 0)
	{
		if (kobo >= 25)
			kobo -= 25;
		else if (kobo >= 10)
			kobo -= 10;
		else if (kobo >= 5)
			kobo -= 5;
		else if (kobo >= 2)
			kobo -= 2;
		else if (kobo >= 1)
			kobo -= 1;
		naira += 1;
	}
	printf("%d\n", naira);
	return (0);
}
