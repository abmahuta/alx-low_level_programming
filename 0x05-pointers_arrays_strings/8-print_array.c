#include <stdio.h>

/**
 * print_array - Prints the n element of int array
 * @a: pointer
 * @n:Element of an array
 */

void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");
}
