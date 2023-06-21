#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 * print_last_digit - for printing last digit
 *
 * @n: check the input of the function +ve or -ve or 0
 *
 * Return: 0 (success)
*/

int print_last_digit(int n)
{	
	if (n > 0)
	n =  n % 10;
	else
	n = abs(n) % 10;
}
		return (n);
