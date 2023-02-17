#include <stdio.h>
/**
 * main - Printing alphabet is lower and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char b;
	char B;

	b = 'a';
	B = 'A';

	while
		(b <= 'z') {
			putchar(b);
			b++;
		}
	while
		(B <= 'Z') {
			putchar(B);
			B++;
		}
	putchar('\n');
	return (0);
}
