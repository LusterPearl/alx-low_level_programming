#include <stdio.h>
#include <string.h>

/**
 * generate_key - Function to generate a key for a user
 * @username: A key based on the username
 * Return : 0
 */
void generate_key(const char *username)
{
	char key[16];

	snprintf(key, sizeof(key), "KEY-%s", username);

	printf("Generated Key: %s\n", key);
}

/**
 * main - generate and print
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", argv[0]);
		return (1);
	}
	generated_key(argv[1]);

	return (0);
}
