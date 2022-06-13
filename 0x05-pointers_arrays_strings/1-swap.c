#include "main.h"

/**
 * swap_int - Swaps the value of two pointers
 *
 * @a: First pointer
 * @b: Second pointer
 */
void swap_int(int *a, int *b)
{
	int ptr_;

	ptr_ = *a;
	*a = *b;
	*b = ptr_;
}
