#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * print_last_digit - Display the last digit of a number.
 * @lastDigit :  It also returns the last digit.
 * Return: The last digit of 'n'.
 */
int print_last_digit(int lastDigit)
{
	lastDigit = lastDigit % 10;
		if (lastD < 0)
		{
			lastDigit = lastDigit * (-1);
			_putchar(lastDigit + '0');
		}
		else
		{
			_putchar(lastDigit + '0');
		}
		return (lastDigit);
}
