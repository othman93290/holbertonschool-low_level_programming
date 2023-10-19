#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * _islower - check if c is lowercase*
 * @c: The ASCII value of the character to be checked.
 * Description: check if c is lowercase
 * Return: 1 if lowercase or 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

