#include "main.h"

/**
 *  _isupper - Checks for upper case alphabet
 *@c: This is the input character
 *Return: 1 if input is uppercase or 0 if otherwise
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
