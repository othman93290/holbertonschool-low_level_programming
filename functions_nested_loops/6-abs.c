#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * _abs - check if c is _abs*
 * @n: The ASCII value of the character to be checked.
 * Description: check if c is print_sign*
 * Return: 1 if print_sign or 0 if uppercase
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (+n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
