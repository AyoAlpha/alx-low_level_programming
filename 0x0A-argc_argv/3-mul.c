#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point 
 * @argc:  argument to count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
