#include <stdio.h>
/**
 * rev_string - Function that reverses a string.
 * @s: Pointer *s pointing to a string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char new[500];
	int count, newcount;

	count = 0, newcount = 0;

	while (*(s + count) != '\0')
	{
		new[count] = *(s + count);
		count++;
	}

	count--;

	while (count >= 0)
	{
		*(s + newcount) = new[count];
		count--;
		newcount++;
	}
}
