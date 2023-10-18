#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - This function prints the lowercase alphabet.
 */
void print_alphabet_x10(void)
{
	char i;
	int letter;

	for (i = '0'; i <= '9'; i++)
	{
        	for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);

		}
		 _putchar('\n');
	}
}
