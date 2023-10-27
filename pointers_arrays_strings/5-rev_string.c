#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - Display a string followed by a new line.
 * @str: The string to be displayed.
 */
void rev_string(char *s)
{
	char *begin = s;
	char *finish = s;
	char temp;

	while (*finish != '\0')
	{
		finish++;
		finish--;
	}
	
	while (begin < finish)
	{
		temp = *begin;
		*begin = *finish;
		*finish = temp;
	begin++;
	finish--;
	}
}

