#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' element of an array of integers
 * @a: int array pointer
 * @n: integer
 * Description: numbers must be seperated by space and comma.
 * number should be displayed same way they were sorted in array
 * You can use only _putchar to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
