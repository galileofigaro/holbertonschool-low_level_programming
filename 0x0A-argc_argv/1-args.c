#include <stdio.h>

/**
 * main - Prints number of arguments passed into it
 * @argc: Number of arguments in program
 * @argv: Arguments in program
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])

{
	printf("%d\n", argc - 1);

	return (0);
}
