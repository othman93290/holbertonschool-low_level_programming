#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculate the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int result = 0;

	while (*s)
	{
	result++;
	s++;
	}

	return (result);
}

