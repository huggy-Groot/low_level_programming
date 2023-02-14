#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int i = 0;

	while (i <= 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
