#include <stdio.h>

/**
 * main - Prints the size of many var types
 *
 * Description: using the main function
 * this program prints "Programmming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char c;
	int  i;
	long int 1i;
	long long 11i;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long: %1d byte(s)\n", sizeof(1i));
	printf("Size of a long long: %1d byte(s)\n", sizeof(11i));
	printf("Size of a float: %1d byte(s)\n", sizeof(f));
	return (0);
}
