#include "main.h"

/**
 * clear_bit - sets the value of a iven bit to 0
 * @n: pointer to number
 * @index: index of a bit
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
