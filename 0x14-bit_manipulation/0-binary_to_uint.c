#include "main.h"

/**
 * binary_to_uint - function that cnvert binary to an unsigned integer
 * @b: pointer parameter given
 * Return: number converted or 0 on success
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return 0;
		c =2 * c + (b[i] - '0');
	}
	return (c);
}
