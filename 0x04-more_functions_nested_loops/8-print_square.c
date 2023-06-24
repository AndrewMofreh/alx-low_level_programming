#include "main.h"
/**
 * print_square - draws a straight line in the terminal
 * @size: number of times the character '/' should be printed
 * Return: nthg as its void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	return (_putchar('\n'));
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
