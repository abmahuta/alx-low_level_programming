#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there*/
/*
 * main - Main entry point
 * return SUCCESS always returns (0)
*/
int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 02;
if (n > 0)
}
	printf("%d is positive\n", n);
}
		else if (n == 0)
{
printf("%d is zero\n", n);
}
		else
{
printf("%d is negative \n", 0);
}
/*your code goes there*/
		return (0);
}
