#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
*/
int main(void)
{
	int num1 = 0;
	int num2;
	int num3;

while (num1 < 10)
{
for (num2 = num1 + 1; num2 < 10; num2++)
{
for (num3 = num2 + 1; num3 < 10; num3++)
{
	putchar((num1 % 10) + '0');
	putchar((num2 % 10) + '0');
	putchar((num3 % 10) + '0');
	if (num1 == 7  && num2 == 8)
{
		break;
}
else
{
		putchar(44);
		putchar(32);
}
}
}
	num1++;
}
	putchar('\n');
	return (0);
}
