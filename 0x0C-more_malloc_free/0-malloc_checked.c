#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allcated memmory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

