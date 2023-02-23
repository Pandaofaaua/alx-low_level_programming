#include "main.h"

/**
 * print_square - printing square
 * @n: number
 * Return: void
 */

void print_square(int n)
{
	int b = 0, a;

	while (b < n && n > 0)
	{
		a = 0;
		while (a < b)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
	if (b == 0)
		_putchar('\n');
}
