#include <stdio.h>

/**
 * main - entry point
 *
 * description: this program is for printing alphabt wzout letter e & q
 *
 * Return: 0 (success)
*/






int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'e' && ch != 'q')
	{ putchar(ch); }
	return (0);
}
