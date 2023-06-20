#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @c: Compute this number
 * Return: Absolute value or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absolute_value;

		absolute_value = c * -1;
		return (absolute_value);
	}
	return (c);
}
