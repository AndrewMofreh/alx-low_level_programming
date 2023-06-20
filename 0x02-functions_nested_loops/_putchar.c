#include "main.h"
#include<unistd.h>

/**
 * _putchar - write the charachter c to stdout
 * @c: the char to print
 *
 * Return: 0n seccess 1
 * on error, -1 is returned
*/







int _putchar(char c)
{
	return (write(1, &c, 1));
}
