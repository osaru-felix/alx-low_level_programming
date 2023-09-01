#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: string to count
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
