#include "main.h"
/**
 * print.alphabet - Prints the alphabet in lowecase.
 *
 * Return: always 0 (Sucess)
 */
void print_alphabet(void)
{
	char letter;
        	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
