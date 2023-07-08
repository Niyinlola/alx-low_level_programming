#include <stdio.h>
/**
 * main - Writes a program that prints its name
 * followed by a new line
 * @argc: number of command line
 * @argv: array of the command line contained in arg..
 * return: (0) Success
 */
int main(int agrc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
