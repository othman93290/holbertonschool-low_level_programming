#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a funvtion that concatenate two string
 * @s: pointer to a char
 * Return: pointer to a char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
