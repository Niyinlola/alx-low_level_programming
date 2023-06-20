#include "main.h"

/**
 * _isalpha - Write alphabetic character
 * @c: Check for this character
 * Return: 1 if character is lower or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
