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
		printf("Last digit of %d is %d and  greater than %d\n", n, d);
	}
	if (d < 6 && d != 0)
	{
		printf("Last digit of %d is 0\n", n, d);
	}
	else if (d < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return 0;
}
