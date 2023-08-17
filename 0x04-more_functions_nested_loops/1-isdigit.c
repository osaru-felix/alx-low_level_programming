#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * Description: function checks for digits
 * @c: The character in ASCII code
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
