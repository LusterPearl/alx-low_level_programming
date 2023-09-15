#include <stdio.h>

/**
 * is_palindrome - checks if a number is a palindrome
 * @num: The number to check
 *
 * Return: 1 if num is a palindrome, 0 otherwise.
 */
int is_palindrome(int num)
{
	int original = num;
	int reversed = 0;
	int digit = num % 10;

	while (num > 0)
	{
		reversed = reversed * 10 + digit;
		num /= 10;
	}
	return (original == reversed);
}

/**
 * main - main in largest palindrome
 *
 * Return: 0
 */
int main(void)
{
	int largest_palindrome = 0;
	int product = i * j;
	FILE *file = fopen("102-result", "w");

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}

	fprintf(file, "%d", largest_palindrome);
	fclose(file);

	return (0);
}


