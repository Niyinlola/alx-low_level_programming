#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - a function that prints result
 * @argc: number of arguments
 * @argv: points to the arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *optr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	optr = argv[2];
	if (get_op_func(optr) == NULL || optr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*optr == 47 || *optr == 37) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(optr)(n1, n2));

	return (0);
}
