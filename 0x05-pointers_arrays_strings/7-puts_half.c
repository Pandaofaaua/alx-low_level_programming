#include "main.h"

/**
 * puts_half - printing half of a string
 * @str: string to be refernced
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
