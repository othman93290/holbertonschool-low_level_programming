#include <stdio.h>
#include "main.h"

void updateValueTo98(int *ptr)
{
	*ptr = 98;
}

	int main(void)
{
	int number = 0;
	int *ptr = &number;

	printf("Before: number = %d\n", number);

	updateValueTo98(ptr);

	printf("After: number = %d\n", number);

	return (0);
}
