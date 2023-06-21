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
	int last_digit;

	if (n < 0)
	last_digit = abs(n) % 10;
	else
	last_digit  = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
