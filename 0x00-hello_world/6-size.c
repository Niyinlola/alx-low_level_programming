#include <stdio.h>
/**
 * main - Entry point that prints various size of the computer
 *
 * Return 0 (Success)
 */
int main(void)
{
char c;
int i;
long d;
long long y;
float f;
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(y));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(f));
return (0);
}

