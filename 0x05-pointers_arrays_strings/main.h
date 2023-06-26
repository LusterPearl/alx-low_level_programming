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

void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

#endif
