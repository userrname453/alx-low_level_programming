#include <stdio.h>

/**
 * main - prints  name, followed by new line.
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
