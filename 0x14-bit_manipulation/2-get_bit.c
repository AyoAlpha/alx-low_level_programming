#include "main.h"

/**
 * get_bit - function get the last bit
 * @n: number to search
 * @index: index of the bit
 *
 * Return: 0 on succes and -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;

	return (value);
}
