#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);

		}
		c++;
		putchar('\n');
	}
	return (0);
}
