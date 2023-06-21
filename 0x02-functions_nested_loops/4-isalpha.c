#include<stdio.h>
#include"main.h"

/**
 * _isalpha - its for return 0 if its a lower case
 *
 * @c: check the input of the finction
 *
 * Return: 1 (success)
 * 0 (not success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}

