#include <stdio.h>

/**
 * main - Prints all base16 in lowercase
 *
 * Return: zero
 */

int main(void)
{

	int count;

	for (count = 48; count < 58; count++)
		putchar(count);

	for (count = 97; count < 103; count++)
		putchar(count);

	putchar('\n');
	return (0);
}
