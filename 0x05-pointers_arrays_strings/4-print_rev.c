#include "main.h"

/**
 * print_rev - Prints string in reverse
 *
 * @s: string type pointer
 */
void print_rev(char *s)
{
	int size = _strlen(s);

	while (size--)
		_putchar(*(s + size));
	_putchar('\n');
}
