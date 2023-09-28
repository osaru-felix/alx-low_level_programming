#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index.
 * @n: a number.
 * @index: the index starting from 0 of the bit you want to set
 * Return: 1 if success, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1 << index;

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n | aux;
	return (1);
}
