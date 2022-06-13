#include "main.h"

/**
 * puts2 - Prints one char out of two of a string
 * @str: The string containing characters
 */

void puts2(char *str)
{
	int ind = 0, len = 0;

	while (st0r[ind++])
		len++;

	for (ind = 0; ind < len; ind += 2)
		_putchar(str[ind]);

	_putchar('\n');
}
