#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 * @format: list of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ip;
	char *str = "(nil)";
	char *sarray = NULL;
	char *separator = ", ";

	va_start(ip, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ip, int));
				break;
			case 'i':
				printf("%d", va_arg(ip, int));
				break;
			case 'f':
				printf("%f", va_arg(ip, double));
				break;
			case 's':
				sarray = va_arg(ip, char *);
				if (sarray == NULL)
					sarray = str;
				printf("%s", sarray);
				break;
			default:
				i++;
				continue;
		}
		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ip);
}
