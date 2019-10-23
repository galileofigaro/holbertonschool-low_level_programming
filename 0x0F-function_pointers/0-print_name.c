#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name being printed
 * @f: function to print a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
