#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 *
 * Return: Returns 1 if a character is lowercase and 0 if otherwise
 * @c: The character to be checked
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
