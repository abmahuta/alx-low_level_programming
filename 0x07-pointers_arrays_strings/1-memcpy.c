#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 * _memcpy: Copies memory area
 */
int main(void)
{
	char arr1[32] = "Alx software engineering";
	char arr2[32] = "course"

	memcpy(arr1, arr2, strlen(arr1) + 1);

	return (0);
}
