#include <stdio.h>
#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: point to @to
 * @to: the string char
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
