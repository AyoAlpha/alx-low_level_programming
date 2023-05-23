#include <stdio.h>

/**
 * _isalpha - function to print if an alphabet is uppercase or lowercase
 * @c: character to be used
 * Return: 1 if  itt is an upper or lowercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
