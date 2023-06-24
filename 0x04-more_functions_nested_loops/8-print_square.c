#include "main.h"
/**
 * print_square - draws a straight line in the terminal
 * @size: number of times the character '/' should be printed
 * Return: nthg as its void
 */

void print_square(int size)
{	int size;
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	_putchar('\n');
	}
}
