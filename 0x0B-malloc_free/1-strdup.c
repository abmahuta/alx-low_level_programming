#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: Array of string
 *
 * Return: Pointer of an array of string
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int i, j;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	str1 = (char *)malloc(sizeof(char) * (i + 1));

	if (str1 == NULL)
	return (NULL);

	for (j = 0; j <= i; j++)
	str1[j] = str[j];

	return (str1);
}
