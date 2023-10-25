#include "main.h"
#include <stdio.h>
/**
 * _puts - Display a string followed by a new line.
 * @str: The string to be displayed.
 */
void _puts(char *str)
{
	int a;

	for (a = 0; (str[a]); a++)
{
	_putchar(str[a]);
				}
	_putchar('\n');
	}
