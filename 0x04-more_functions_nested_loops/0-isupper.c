#include "main.h"
#include <stdio.h>
/**
 * _isupper - function to print alphabet in uppercase
 * @c: character to be considered
 * Return: 1  if the character is in uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
