#include "main.h"
#include <stdio.h>
/**
 * _strcmp - writes a function that compares two strings
 * @s1: input to compare s1
 * @s2: input to compare  s2
 * Return: 0 if s1 and s2 are equal
 * positive integer if s1 is greater than s2
 * negative integer if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
int a = 0, b;

while (s1[a] != '\0' && s2[a] != '\0')
{
	if (s1[a] != s2[a])
	{
		b = s1[a] - s2[a];
		break;
	}
	else
	{
		b = s1[a] - s2[a];
	}
	a++;
}
return (b);
}
