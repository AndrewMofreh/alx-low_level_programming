#include<stdio.h>

/**
 * main - entry point
 *
 * discreption: this for printing alphabt in reverse
 *
 * Return: 0 (success)
*/

	int main(void)
{
	int i;

	for (i = 122 ; i >= 97; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
