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
	char letter;

	for (number = 0; number  <= '9';number ++)
	{
	putchar (number);
	}

	for (letter = 'a'; letter <= 'f';letter ++)
        {
		putchar (letter);
	}

	putchar('\n');
	return (0);
}
