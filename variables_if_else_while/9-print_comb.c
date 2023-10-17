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
	int number = 0;

	for (number  <= '9'; number++)
	{
	putchar (number);

	for (number + '0')
	putchar (number);

	if (number < '9')
	{
		putchar (',');
	}
		number++;
	}

	putchar('\n');
	return (0);
}
