#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: integer carrier
 * Return: 1 if true. 0 if false.
 */

int _isupper(int c)
{
	if (c >= 60 && c <= 90)
	{
		return (1);
	}
	return (0);
}
