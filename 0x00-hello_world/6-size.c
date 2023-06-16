#include <stdio.h>
/**
 * main - Entry point that prints various size of the computer
 *
 * return 0 (Success)
 */
int main(void)
{
char 1;
int 4;
long 8;
long long 8;
float 4;
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(1));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(4));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(8));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(8));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(4));
return (0);
}

