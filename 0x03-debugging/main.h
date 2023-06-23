#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * positive_or_negative - prints if an integer is positive or negative
 * @i: integer to be tested
 */
void positive_or_negative(int i);

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c);

/**
* print_remaining_days - picks a date
* and prints how many is left
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year);

#endif 
