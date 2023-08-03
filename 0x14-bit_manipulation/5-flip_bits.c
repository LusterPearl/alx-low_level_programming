#include "main.h"

/**
 * flip_bits - Determine the number of bits that need to be flipped
 * to transform one number
 * @n: the first number
 * @m: the second number
 *
 * Return: the count of bits that need to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
