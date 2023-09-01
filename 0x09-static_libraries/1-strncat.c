#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: dest;
 */

char *_strncat(char *dest, char *src, int n)

{
	int destlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
