#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 *
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

