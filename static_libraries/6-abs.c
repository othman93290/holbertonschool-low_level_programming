#include "main.h"
#include <stdio.h>

/**
 * _abs - entry point
 * @num: the number to test
 * Description: absolute value of an integer.
 * Return: 0 if success
*/

int _abs(int num)
{
if (num >= 0)
{
return (num);
}
else
{
return (-num);
}
}
