#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all given arguments
 * @n: number of arguments
 * @... function that indicates variable arguments
 *
 * Return: if n==0, 0. else print sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
