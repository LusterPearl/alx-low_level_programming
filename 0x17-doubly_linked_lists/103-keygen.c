#include <stdio.h>
#include <string.h>

/**
 * generate_key - Function to generate a key for a user
 * @username: A key based on the username
 * @key: pointer to a buffer where the generated will be stored
 *
 * Return: nothing
 */
void generate_key(const char *username, char *key)
{
	snprintf(key, 16, "KEY-%s", username);
}

/**
 * main - generate and print
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	char key[16];

	if (argc != 2)

	{
		fprintf(stderr, "Usage: %s <username>\n", argv[0]);
		return (1);
	}
	generate_key(argv[1], key);

	printf("Generated key: %s\n", key);

	return (0);
}
