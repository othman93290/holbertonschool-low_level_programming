#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - a funvtion that concatenate two string
 * @s: pointer to a char
 * Return: pointer to a char
 */

void _print_rev_recursion(char *s)

{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
