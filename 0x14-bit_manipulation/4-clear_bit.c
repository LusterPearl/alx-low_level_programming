#include "main.h"

/**
 * clear_bit - reset the value of a specified bit to 0
 * @n: a pointer to the number that will be modified
 * @index: the index of the bit to be cleared
 *
 * Return: 1 to indicate success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
