#include "main.h"
/**
 * print.alphabet - Prints the alphabet in lowecase.
 *
 * Retun: always 0 (Sucess)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
