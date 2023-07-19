#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own upcodes function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always Successful
 */
int main(int argc, char *argv[])
{
	int i, byt;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (i = 0; i < byt; i++)
	{
		printf("%02x", p[i] & 0xFF);
		if (i != byt - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
