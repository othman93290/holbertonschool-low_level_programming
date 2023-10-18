#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - This function prints the lowercase alphabet.
 */
void print_alphabet(void)
{
	char damso;
	int letter;

	for (damso = '0'; damso <= '9'; damso++)
	{
        	for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
