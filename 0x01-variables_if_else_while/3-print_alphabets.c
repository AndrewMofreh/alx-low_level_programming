#include<stdio.h>

/**
 * main - entry point
 *
 * description: print alphabet in lowercase and uppercase
 *
 * return: always  0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (CH <= 'Z')
	{
	       	putchar(ch);
	       	CH++;
	}
	putchar('\n');
	
	return (0);
}
