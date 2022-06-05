#include <stdio.h>
/**
 * main - print possible combination of two digits
 * return - will always return 0 if SUCCESS
*/
int main(void)
{
	int x = 0;
	int y;

	while (x < 10)
{
	for (y = 0; y < 10; y++)
{
	putchar((x % 10) + '0');
	putchar((y % 10) + '0');
if (x == 9 && y == 9)
{
	break;
}
	else
{
	putchar(44);
	putchar(32);
}
}
	x++;
}
	putchar('\n');
	return (0);
}
