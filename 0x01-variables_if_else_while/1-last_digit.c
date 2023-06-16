i#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/*
*
*Main - entry point for the program
*description: This program generates a random number and determines the last digit of the number
*return 0 (success)
*/
int main(void)
{
	int n, digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of n is %d and is greater than 5\n", n);
	else if (digit == 0)
		printf("Last digit of n is %d and is zero\n", n);
	else if (digit < 6 && digit > 0)
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	return (0);
}
