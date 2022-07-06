#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: An arry input
 * @size: Size of an array
 * @cmp: Pointer to the function to be used to compare values
 * Return: index for cmp not 0, -1 for no matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
