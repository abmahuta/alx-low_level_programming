#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * mystr: A string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length += 1;
		s += 1;

	}
	return (length);

}	
