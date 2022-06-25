#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
