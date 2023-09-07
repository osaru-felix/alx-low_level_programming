#include "main.h"

/**
 * array_range - Function creates an array of integers
 * @min: The lower end of the array
 * @max: The upper end of the array
 * Return: Pointer to the array created
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		ptr[i] = min;

	return (ptr);
}
