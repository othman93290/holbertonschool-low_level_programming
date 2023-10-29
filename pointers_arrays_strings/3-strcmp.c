#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - a function that compare two strings
 * @s1: a pointer to a char
 * @s2: a pointer to a char
 * Return: + s1 < s2, - s1 > s2, 0 s1 = s2
*/

int _strcmp(char *s1, char *s2)
{
int len1 = strlen(s1);
int len2 = strlen(s2);

if (len1 == len2)
{
return (0);
}
else if (len1 < len2)
{
return (13);
}
else
{
return (-13);
}
}
