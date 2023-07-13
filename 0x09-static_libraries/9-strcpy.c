#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 *  @src: copy from
 *  @dest: copy to
 *  Return: pointer to dest input
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for (; z < y; z++)
	{
		dest[z] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
