#include "main.h"

/**
 * print_triangle - printing a triangle
 * @size: integer type
 * Return: void
 */

void print_triangle(int size)
{
	int a = 1, ab;

	while (a <= size && size > 0)
	{
		ab = 0;
		while (ab < size - a)
		{
			_putchar(' ');
			ab++;
		}
		ab = 0;
		while (ab < a)
		{
			_putchar('#');
			ab++;
		}

		_putchar('\n');
		a++;
	}
	if (a == 1)
		_putchar('\n');
}
