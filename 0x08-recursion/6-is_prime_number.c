#include "main.h"
#include <stdio.h>
/**
 * check_prime - Check all number < n if they can divide it
 * @n: An int
 * @resp: An int
 * Return: An int
 */

int check_prime(int n, int resp)
{
	if (resp >= n && n > 1
	return (1);
	else if (n % resp == 0 || n <= 1)
	return (0);
	else
	return (check_prime(n, resp + 1));
}

/**
 * is_prime_number - Checks if n is a prime number
 * @n: A given number
 * Return: 1 if the number is prime or 0 otherwise
 */


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
