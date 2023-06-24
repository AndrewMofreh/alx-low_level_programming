#include "main.h"
/**
 * print_square - draws a straight line in the terminal
 * @size: number of times the character '/' should be printed
 * Return: nthg as its void
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
		_putchar('#');
	_putchar('\n');
	}
}
