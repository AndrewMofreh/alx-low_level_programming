#include<stdio.h>
#include"main.h"

/**
 * _abs - its for return 0 if its a lower case
 *
 * @n: check the input of the function +ve or -ve or 0
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
}
