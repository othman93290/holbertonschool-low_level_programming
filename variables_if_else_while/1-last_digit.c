#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, d;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	/* your code goes there */
	if (d > 5)
	{
		int n = 98;
		printf("Last digit of n is and is greater than 5 %d\n", n);
	}
	else if (d < 6 && d != 0)
	{
		int n = -98;
		printf("Last digit of n is and is 0 %d\n", n);
	}
	else (d < 6)
	{
		int n = 980;
		printf("Last digit of n is and is less than 6 and not 0 %d\n", n);
	}
	return (0);
}
