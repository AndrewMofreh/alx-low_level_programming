#include<stdio.h>
#include"main.h"

/**
 * print_numbers  - its for return 0 if its a lower case
 *
 * discription: its a function to print from 0 to 9
 *
 * Return: 1 (success)
 * 0 (not success)
*/

void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar (i);
		i++;
	}
	_putchar('\n');

}

