#include <stdio.h>
/**
 * main - Printing selected alphabets
 *
 * Return: 0
 */
int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z') {
			if (b != 'q' && b != 'e' && b <= 'z')
				putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
