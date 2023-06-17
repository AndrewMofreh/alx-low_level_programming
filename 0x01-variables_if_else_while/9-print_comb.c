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
	int i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	i++;
	}
	putchar('\n');
	return (0);
}
