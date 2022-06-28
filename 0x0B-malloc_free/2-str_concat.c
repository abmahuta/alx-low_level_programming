#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @str1: First string
 * @str2: Second string
 *
 * Return: Pointer of an array of string
 */
char *str_concat(char str1, char str2)
{
	char *strout;
	unsigned int i, j, k, trgt;

	if (str1 == NULL)
		str1 = ""

	if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i] != '\0'; i++)

	for (j = 0; str2[j] != '\0'; j++)
		if (strout == NULL)
		{
		free(strout);
		return (NULL);
		}
	for (k = 0; k < i; k++)
	strout[k] = str1[k];

	trgt = j;
	for (j = 0; j <= trgt; k++, j++)
		strout[k] = str2[j];

	return (strout);
}

