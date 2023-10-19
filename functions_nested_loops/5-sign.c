#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * print_sign - check if c is print_sign*
 * @n: The ASCII value of the character to be checked.
 * Description: check if c is print_sign*
 * Return: 1 if print_sign or 0 if uppercase
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
