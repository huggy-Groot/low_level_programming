#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char c = 'a';
	char j = 'A';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
