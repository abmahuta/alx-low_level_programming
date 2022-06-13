#include "main.h"

/**
 * *_strcpy - Copy a string to another string
 * @dest: Pointer of char type
 * @src: pointer
 *
 * Return: numbers dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
