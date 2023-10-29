#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - lowercase letter to uppercase letter in a string
 * @n: pointer to a char
 * Return: @n
*/

char *string_toupper(char *n)
{

	int i;

for (i = 0; n[i] != '\0' ; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
	n[i] = n[i] - 32;
	}
}
return (n);
}
