#include "main.h"

/**
 * get_bit - retrieve the value of a bit at a
 * specific index within a decimal number
 * @n: the decimal number to search within
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)

		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
