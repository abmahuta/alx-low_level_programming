
#include "main.h"
/**
 * print_rev - Prints string in reverse
 * 
 * return: Void
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
