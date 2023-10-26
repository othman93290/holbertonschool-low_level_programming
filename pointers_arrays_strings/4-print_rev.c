#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int a;

	for (a = 62; (s[a]); a--)
	{
	_putchar(s[a]);
	}
	_putchar('\n');
}

