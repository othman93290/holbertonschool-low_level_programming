#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of 980 is 0 and is 0\n");
	}
	if (n == 0)
	{
		printf("Last digit of 98 is 8 and is greater than 5\n");
	}
	if (n < 6)
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
	}
	return (0);
}
