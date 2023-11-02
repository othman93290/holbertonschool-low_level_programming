#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - a funvtion that concatenate two string
 * @s: pointer to a char
 * Return: pointer to a char
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
