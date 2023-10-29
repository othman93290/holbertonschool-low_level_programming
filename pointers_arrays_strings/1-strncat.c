#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a funvtion that concatenate two string
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: input integer
 * Return: pointer to a char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

while (dest[i] != '\0')
{
	i++;
}
while (src[j] != '\0' && j < n)
{
	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = '\0';
return (dest);
}
