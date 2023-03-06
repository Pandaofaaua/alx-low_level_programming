#include "main.h"

/**
 * _strchr -locating a character in string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: If c is found, a pointer to the first occurrence
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
