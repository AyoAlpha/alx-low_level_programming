#include "main.h"

/**
 * _memset - Entry point
 * Description: fills memory with constant byte
 * @s: first character
 * @b: second character
 * @n: integer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
