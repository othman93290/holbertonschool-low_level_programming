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
	char number = '0';

	for (number <= '9')
	{
	putchar (number);
	number++;
	}

	char letter = 'A';

	for (letter <= 'F')
        {
		putchar (letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
