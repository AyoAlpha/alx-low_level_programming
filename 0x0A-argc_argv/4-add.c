#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument to count
 * @argv: argument vector
 * Return: 0 if no number passed and 1 if an alphabet is passed
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
