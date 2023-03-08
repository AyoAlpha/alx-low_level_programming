#include "main.h"

/**
 * _strlen_recursion -  Entry point
 * Description: returns the length of a string
 * @s: string data type
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
