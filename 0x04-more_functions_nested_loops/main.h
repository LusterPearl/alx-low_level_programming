#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c);

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int c);

/**
 * _isdigit - write a function that check for a digit (0 through 9).
 * @c: char to check
 * Return: 0 or 1
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second onteger
 * Return: addition of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - Prints the numbers since 0 up to 9 
 * Return: void
 */
void print_numbers(void);

/**
 * print_most_numbers - prints
 * Return: void
 */
void print_most_numbers(void);

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * Return: 10 times of the number since 0 up to 14
 */
void more_numbers(void);

void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);

#endif
