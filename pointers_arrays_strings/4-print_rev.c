#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Display a string followed by a new line.
 * @s: The string to be displayed.
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
