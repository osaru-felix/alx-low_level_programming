#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints numbers
 * @separator: string to be printed between numbers
 * @n: Number of integers passed
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ip;

	va_start(ip, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ip, int);
		printf("%d", num);

		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ip);
	printf("\n");
}
