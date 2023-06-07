#include "main.h"

/**
 * _strlen_recursion - function that print the length of a string
 * @s: character type
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
