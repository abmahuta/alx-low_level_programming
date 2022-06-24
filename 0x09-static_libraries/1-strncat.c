#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
