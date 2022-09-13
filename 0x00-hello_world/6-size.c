#include <stdio.h>

/**
 * main - Prints the size of variable types
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of float: %ld byte(s)\n", sizeof(e));
	return(0);
}
