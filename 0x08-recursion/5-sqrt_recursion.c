#include "main.h"

/**
 * square - Find square root
 * @n: A number  to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	return (val);
	else if (val * val >  n)
	return (-1);
	else
	return  (square(n, val + 1));
}

/**
 * _sqrt_recursion - Returns natural square root of a number.
 * @n: A number
 * Return: Square root of a number
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
