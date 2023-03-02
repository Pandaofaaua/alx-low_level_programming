#include "main.h"

/**
 * string_toupper - changing loeer case of string
 * @str: string to be changed
 *
 * Return: A pointer to string changed
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = 32;
		
		index++;
	}
	return (str);
}
