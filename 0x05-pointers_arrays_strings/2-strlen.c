#include "main.h"

/**
 * _strlen - function that find the length of a string
 * @s: parameter to be used
 * Return: integer
 */

int _strlen(char *s)
{
	int x, count = 0;

	for (x = 0; s[x] != '\0'; x++)
		count++;
	return (count);
}
