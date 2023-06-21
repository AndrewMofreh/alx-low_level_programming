#include"main.h"
#include<stdio.h>

/**
 * print_to_98 - print num to 98 7aga kdh
 *
 * @n: output
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	els
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}

