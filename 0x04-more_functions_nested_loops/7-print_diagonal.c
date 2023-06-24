#include "main.h"
/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of times the character '/' should be printed
 * Return: the number of blalbalba
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('/');
	}
	_putchar('\n');
}
