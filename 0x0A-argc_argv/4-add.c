#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that add possitive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the command line argyuments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int y, z, sum = 0;

	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z] != '\0'; z++)
		{
			if (!isdigit(argv[y][z]))
			{	printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[y]);
	}
	printf("%d\n", sum);
	return (0);
}
