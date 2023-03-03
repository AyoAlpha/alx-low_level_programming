#include "main.h"

/**
 * _strncat - Entry point
 * Description: function that concatenates two strring
 * @src: the source string
 * @dest: the destination string
 * @n: byte from src
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}

