#include "main.h"

/**
 * 6-abs.c - Check computes the absolute value of an integer.
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
