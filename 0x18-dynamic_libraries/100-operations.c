#include <stdio.h>

/**
 * add - Add two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of a minus b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divide two integers
 * @a: The first integer (dividen)
 * @b: The second integer (divisor)
 * Return: The result of a dividen by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar(':');
		putchar(' ');
		putchar('C');
		putchar('a');
		putchar('n');
		putchar('n');
		putchar('o');
		putchar('t');
		putchar(' ');
		putchar('d');
		putchar('i');
		putchar('v');
		putchar('i');
		putchar('d');
		putchar('e');
		putchar(' ');
		putchar('b');
		putchar('y');
		putchar(' ');
		putchar('z');
		putchar('e');
		putchar('r');
		putchar('o');
		putchar('\n');
		return (0);
	}
	return (a / b);
}

/**
 * mod - Compute the remainder of two integers
 * @a: The first integer(dividen)
 * @b: The second integer (divisor)
 * Return: The remainder of a divided by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar(':');
		putchar(' ');
		putchar('C');
		putchar('a');
		putchar('n');
		putchar('n');
		putchar('o');
		putchar('t');
		putchar(' ');
		putchar('d');
		putchar('i');
		putchar('v');
		putchar('i');
		putchar('d');
		putchar('e');
		putchar(' ');
		putchar('b');
		putchar('y');
		putchar(' ');
		putchar('z');
		putchar('e');
		putchar('r');
		putchar('o');
		putchar('\n');
	}
	return (a % b);
}
