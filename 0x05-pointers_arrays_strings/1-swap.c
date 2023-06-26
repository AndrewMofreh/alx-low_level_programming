#include<stdio.h>
#include"main.h"

/**
 * swap_int - its a function that assign a new value to a pointer named n
 *
 * @a: pointer to an int
 * @b: pointer to an int
 *
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = *m;
}
