#include "main.h"

/**
 * _strcpy - copying the string pointed by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to be the pointet 'src'
 * to the buffer pointed to by the 'dest'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
