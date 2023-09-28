#include "main.h"

/**
 * flip_bits - function returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: a number.
 * @m: another number.
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int value = 0;
	int len = (sizeof(num) * 8);

	while (len >= 0)
	{
		if (num & 1)
			value++;
		num = num >> 1;
		len--;
	}
	return (value);
}
