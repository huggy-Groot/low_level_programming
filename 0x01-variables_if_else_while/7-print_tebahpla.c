#include <stdio.h>

/***
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char c = 'z';

	while ( c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
