#include "main.h"
/**
 * puts2 - Prints every character of a string followed by a new line.
 * @str: String parameter of the function puts2
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
8}
