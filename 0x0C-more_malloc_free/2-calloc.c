#include "main.h"

/**
 * _calloc - allocates memory using calloc
 * @nmemb: number of array members
 * @size: size of memory
 * Return: pointer to new memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
