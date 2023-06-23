#include<stdio.h>
#include"main.h"

/**
 * _isdigit - its for return 0 if its a lower case
 *
 * @c: check the input of the function
 *
 * Return: 1 (success)
 * 0 (not success)
*/

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	return (0);
}

