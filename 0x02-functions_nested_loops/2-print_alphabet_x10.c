#include<stdio.h>
#include"main.h"

/**
 * print_alphabet_x10 - its for printing alphabet 10 times
*/

void print_alphabet_x10(void);
{

	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'A'; c <= 'Z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
