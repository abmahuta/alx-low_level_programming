#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 *
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int ptr_;

	ptr_ = *a;
	*a = *b;
	*b = ptr_;
}

