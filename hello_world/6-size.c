#include <stdio.h>
int main(void)
{
printf(gcc 6-size.c -m32 -o size32 2> /tmp/32);
	printf(gcc 6-size.c -m64 -o size64 2> /tmp/64);
return (0);
}
