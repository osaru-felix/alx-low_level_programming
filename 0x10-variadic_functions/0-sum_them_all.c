#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function sums variable arguments
 * @n: Number of arguments
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ip;

	va_start(ip, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ip, int);
	}

	va_end(ip);

	return (sum);
}
