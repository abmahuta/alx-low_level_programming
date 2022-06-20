#include "main.h"

/**
 * _memset - Fills a block of memory with constant byte
 *
 * @s: Pointer to a memory area
 * @b: Value with wich to fill the block of memory
 * @n: Number of bytes to fill the memory with
 *
 * Return: Pointer to memory at s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
