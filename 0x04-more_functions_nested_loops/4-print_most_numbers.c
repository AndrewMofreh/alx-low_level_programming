#include<stdio.h>
#include"main.h"

/**
 * print_most_numbers - its for return 0 if its a lower case
 *
 * discription: its a function to print from 0 to 9
 *
*/

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
		if (i != 2 && i != 4)
	{
		_putchar ('0' + i);
		i++;
	}
	_putchar('\n');

}

