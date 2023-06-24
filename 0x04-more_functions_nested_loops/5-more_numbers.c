#include<stdio.h>
#include"main.h"

/**
 * more_numbers - its for return 0 if its a lower case
 *
 * discription: its a function to print from 0 to 14 ten times
 *
*/

void more_numbers(void)
{

	int i = 0;
	int c = 0;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar('1');
			}
			_putchar(c % 10 + '0');
		}
	_putchar('\n');
	}
}
