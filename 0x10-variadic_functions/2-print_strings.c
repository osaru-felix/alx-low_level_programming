#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prints strings
 * @separator: string to be printed between strings
 * @n: Number of strings passed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str = NULL;
	va_list ip;

	va_start(ip, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ip, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

	if ((i != n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");
	va_end(ip);
}
