#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of parameters.
 * @n: constant unsigned int.
 * Return: the sum.
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	va_list list;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);

}
