#include "main.h"
/**
 * print_numbers - print 0123456789
 *
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
