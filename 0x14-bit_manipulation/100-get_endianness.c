#include "main.h"

/**
 * get_endianness - function checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int x = 1;

	return ((int) (((char *)&x)[0]));
}
