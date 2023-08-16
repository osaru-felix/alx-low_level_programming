#include "main.h"

/**
 * 2-print_alphabet_x10.c - check description
 * Description: function prints alphabet in lowercaes 10times
 * using the _putchar function
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
