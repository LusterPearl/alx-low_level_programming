#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

/**
 * reset_to _98 - a function that takes a pointer to an int 
 * as parameter
 * and updates the value it points to to 98
 * @n: input
 * Return: n
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b);

/**
 * _strlen - a function that returns the length
 * of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s);

/**
 * _puts -  a function that prints a string, followed by a new line,
 *  to stdout
 *  @str: string to print
 */
void _puts(char *str);

/**
 * print_rev - imprime en reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s);

/**
 * rev_string - function that reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s);

/**
 * puts2 -  function that print only one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str);

/**
 * putts_half - prints half of a string
 * @str: The string to print
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - a function that prints n elements of an
 * arry
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n);

/**
 *char *_strcpy - a function that copies the string pointed
 * to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */
int _atoi(char *s);

#endif
