<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that print 1/2 character
 * @str: input interger
 * return: void
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	if (length != 0)
	{
		for (i = 0; i < length; i++)
		{
			if (i % 2 == 0)
			{
				putchar(str[i]);
			}
		}
	}
	putchar(10);
}
