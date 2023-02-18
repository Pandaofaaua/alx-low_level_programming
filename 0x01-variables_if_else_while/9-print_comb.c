#include <stdio.h>
/**
 * main - Printing nummbers commas and space
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while
		(i < 10) {
			putchar(i + '0');
			i++; {
				putchar(','); {
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
