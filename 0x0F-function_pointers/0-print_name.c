#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: A pointer parameter
 * @f: A pointer to void function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
