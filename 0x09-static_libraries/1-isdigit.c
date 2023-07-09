#include "main.h"

/**
 * _isdigit - Checks for digit 0 through 9
 * @c: int to be checked
 * Retern: 1 if c is true or 0 if otherwise
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
