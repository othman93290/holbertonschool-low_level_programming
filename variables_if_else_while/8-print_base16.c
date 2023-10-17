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
	char number;

	for (number = 0; number  <= '9';number ++)
	{
	putchar (number);
	}

	char letter;

	for (letter = 'A'; letter <= 'F';letter ++)
        {
		putchar (letter);
	}

	putchar('\n');
	return (0);
}
