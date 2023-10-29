#include <stdio.h>
#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input integer
 * Return: 1 if c is uppercase, 0 if it is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
