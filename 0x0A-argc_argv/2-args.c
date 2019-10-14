#include <stdio.h>

/**
 * main - print all args
 * @argc: arg count
 * @argv: arg array
 * Return: zero
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
