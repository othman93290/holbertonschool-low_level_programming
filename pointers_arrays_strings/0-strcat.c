#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - a funvtion that concatenate two string
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: pointer to a char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

while (dest[i] != '\0')
{
	i++;
}
while (src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = '\0';
return (dest);
}
