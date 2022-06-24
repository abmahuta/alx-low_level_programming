#include "main.h"

/**
 * _puts - Writes a string to the stdout
 *
 * @str: String to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
