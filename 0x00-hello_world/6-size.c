#include <stdio.h>
/**
 * main - Printing size of various type on the computer
 * Return: 0
 */

int main(void)
{
	char z;
	int y;
	long int x;
	long long int w;
	float v;

printf("Size of a char: %lu.\n", (unsigned long)sizeof(z));
printf("Size of an int: %lu.\n" (unsigned long)sizeof(y));
printf("Size of a long int: %lu.\n" (unsigned long)sizeof(x));
printf("Sizs of a long long int: %lu.\n" (unsigned long)sizeof(w));
printf("Size of a float: %lu.\n" (unsigned long)sizeof(v));
return (0);
}
