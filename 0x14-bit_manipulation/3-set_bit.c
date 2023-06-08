#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: index of a bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = 1 << index;
	*n = *n | i;

	return (1);
}
