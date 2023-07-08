#include <stdio.h>
/**
 * main - A  program that prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
		printf("%s\n", argv[y]);
	return (0);
}
