#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - a funvtion that concatenate two string
 * @s: pointer to a char
 * Return: pointer to a char
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
