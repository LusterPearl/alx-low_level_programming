#include "main.h"
/**
 * print_triangle - Prints a triangle of squares according parametet
 * @size: The Size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
		for (z = x - y; z >= 1; z++)
		{
		_putchar(' ');
		}
	for (y = 1; y <= x; y++)
	{
	_putchar('#');
	}
	_putchar('\n');
		}
	}
}
