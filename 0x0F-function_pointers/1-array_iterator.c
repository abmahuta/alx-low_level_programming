#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a pointer function
 * @array: An array of elements
 * @size: Size of an array
 * @action: A pointer to a function
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
