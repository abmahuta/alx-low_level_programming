#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int num1 = 0;
	int num2;

while (num1 < 99)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
	putchar((num1 / 10) + '0');
	putchar((num1 % 10) + '0');
	putchar(32);
	putchar((num2 / 10) + '0');
	putchar((num2 % 10) + '0');
if (num1 == 98  && num2 == 99)
	continue;
	putchar(44);
	putchar(32);
}
	num1++;
}
	putchar('\n');
	return (0);
}
