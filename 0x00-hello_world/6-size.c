#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
        printf("Size of a long long int: %d byte(s)\n", sizeof(d));
        printf("Size of a float: %d byte(s)\n", sizeof(e));
        return (0);
}	


~                                    	       
