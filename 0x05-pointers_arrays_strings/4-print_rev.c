#include "main.h"

/**
 * print_rev - printing reverse of a string
 * @s: what to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
