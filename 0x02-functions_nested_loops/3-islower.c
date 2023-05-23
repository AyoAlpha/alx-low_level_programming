#include  <stdio.h>

/**
 * _islower - functions that check lowercase letter
 * @c: character to be used
 * Return: 1 if its a lowercase alphabet and 0 if it's not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
