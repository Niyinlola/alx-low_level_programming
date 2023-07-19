#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - a function to selects the correct function
 * to perform the operation asked by user
 * @s: points to character
 * Return: an operator function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int y = 0;

	while (y < 5)
	{
		if (*s == *ops[y].op)
			return (ops[y].f);
		y++;
	}

	return (NULL);
}
