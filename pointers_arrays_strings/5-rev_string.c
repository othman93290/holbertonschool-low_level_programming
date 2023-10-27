#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverse a string and display it followed by a new line.
 * @s: The string to be reversed and displayed.
 */
void rev_string(char *s)
{
char *begin = s;
char *finish = s;
char temp;
while (*finish != '\0')
finish++;
finish--;
while (begin < finish)
{
temp = *begin;
*begin = *finish;
*finish = temp;
begin++;
finish--;
}
}
