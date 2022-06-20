#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * _memset: Fills a block of memory with a constant byte.
 * Return: Always (0)
 */
int main(void);
{
	char arr[32] = "Alx software engineering course";

	_memset(arr + 3, '-', 22 * sizeof(char));
	return (0);
}
