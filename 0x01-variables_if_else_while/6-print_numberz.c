#include<stdio.h>

/**
 * main - entry point
 *
 * discreption: its a c program for printing integer from 0 to 9
 *
 * Return: 0 (success)
*/

	int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
