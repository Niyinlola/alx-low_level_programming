#include "main.h"
/**
 * _atoi -A function that  converts a string to an integer
 * @s: string to be converted
 * Return: converted input from the string
 */
int _atoi(char *s)
{
	unsigned int y = 0;
	int z = 1;

	do {
		if (*s == '-')
			z *= -1;
		else if (*s >= '0' && *s <= '9')
			y = (y * 10) + (*s - '0');
		else if (y > 0)
			break;
	} while (*s++);
return (y * z);
}
