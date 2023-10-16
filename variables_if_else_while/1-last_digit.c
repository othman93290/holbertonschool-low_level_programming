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
		printf("is greater than 5\n");
	}
	if (n == 0)
	{
		printf ("is 0");
	}
	if (n < 6)
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
