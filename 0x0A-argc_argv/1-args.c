#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument to count 
 * @argv: argument vector
 * Return: always 0 if it's success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
