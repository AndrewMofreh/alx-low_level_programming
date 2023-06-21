#include<stdio.h>
#include"main.h"

/**
 * print_sign - its for return 0 if its a lower case
 *
 * @n: check the input of the function +ve or -ve or 0
 *
 * Return: 1 (success)
 * 0 (not success)
 * -1 otherwise
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
		return (-1);
}
