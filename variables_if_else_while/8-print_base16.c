#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char number = '0';

        while (number <= '9')
        {
        putchar (number);
        number++;
        }

        letter = 'A';

        while (letter <= 'F')
        {
                putchar (letter);
                letter++;
        }

        putchar('\n');
        return (0);
}
