#include "main.h"
/**
 * create_array - Creates array of chars and initiazie it with a spefic char
 *
 * Return: Null if size is zero or a pointer to the array or NULL if faild.
 * @size: Size of the array
 * @*ptr: A pointer to the array
 * @c: A char variable
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	return (NULL);
	ptr = (chat *)malloc(c * sizeof(chat));
	if (ptr == NULL)
		return (NULL);

		for (i = 0; i < size; i++)
			ptr[i] = c;
	return (c);
}
