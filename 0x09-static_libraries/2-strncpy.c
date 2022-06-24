#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Copies a string to another string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to source string.
 * @n: Number of characters to be copied.
 *
 * Return: A copy of dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
