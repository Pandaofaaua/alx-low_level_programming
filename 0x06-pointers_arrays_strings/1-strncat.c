#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: A pointer to resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}

