#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number  <= 9; number ++)
	putchar (number);

	for (number = 'a'; number <= 'f'; number ++)
	putchar (number);

	putchar('\n');
	return (0);
}
