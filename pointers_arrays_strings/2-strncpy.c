#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * _strncpy - function that copy a string with max (n)
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: input integer
 * Return: @dest
*/

char *_strncpy(char *dest, const char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}

while (i < n)
{
	dest[i] = '\0';
	i++;
}

return (dest);
}
