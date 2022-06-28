#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of chars and initiazie it with a spefic char
 *
 * Return: Null if size is zero or a pointer to the array or NULL if faild.
 * @size: Size of the array
 * @*cr: A pointer to the array
 * @c: A char variable
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}

