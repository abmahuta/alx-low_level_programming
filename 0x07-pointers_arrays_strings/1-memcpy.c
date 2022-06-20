#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies a memory area.
 * @dest: Destination of the copied memory area.
 * @src: Source from which to copy.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to dest or 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0

	while (i < n)
		i++;
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
