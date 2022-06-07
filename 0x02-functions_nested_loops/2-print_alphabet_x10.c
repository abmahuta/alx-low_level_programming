#include "main.h"
/**
 * print_alphabet_x10 - Function that prints alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int lines = 0;
	char alphabet;

	while (lines++ <= 9)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	_putchar(alphabet);
	_putchar('\n');
	}
}
