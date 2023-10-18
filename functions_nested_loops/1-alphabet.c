#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <alphabet.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';)
	{
	putchar (letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
