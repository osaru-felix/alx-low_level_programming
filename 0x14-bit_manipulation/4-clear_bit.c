#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index.
 * @n: a number.
 * @index: the index starting from 0 of the bit you want to set.
 * Return: 1 if success, or -1 if failed.
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int value =  ~(1 << index);

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n & value;
	return (1);
}
