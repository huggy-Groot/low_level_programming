#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char j = 0;

	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
