#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * _isalpha - check if c is alpha*
 * @c: The ASCII value of the character to be checked.
 * Description: check if c is alpha*
 * Return: 1 if alpha or 0 if uppercase
 */

int _isalpha(int c)
{
	
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
