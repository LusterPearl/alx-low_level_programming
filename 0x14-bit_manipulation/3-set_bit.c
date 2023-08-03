#include "main.h"

/**
 * set_bit - modify a bit at a specified index to have a value of 1
 * @n: A pointer to the number that will be changed
 * @index: the index of the bit to be set to 1
 *
 * Return: 1 to indicate success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
