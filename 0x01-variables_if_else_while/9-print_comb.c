#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar ('\n');

	return (0);
}
