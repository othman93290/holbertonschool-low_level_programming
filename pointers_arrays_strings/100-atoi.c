#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 *
 *
 *
 */

int _atoi(char *s)
{
	int length = strlen(s);
	int i, result = 0;
	int sign = 1;
	int started = 0;

	for (i = 0; i < length; i++)
	{
		if (s[i] == '-')
		{
			if (isdigit(s[i + 1]))
			{
				sign = -1;
				started = 1;
			}
		}
	else if (s[i] == '+')
	{
		if (isdigit(s[i + 1]) && !started)
		{
			started = 1;
		}
		else if (started)
		{
			break;
		}
	}
	else if (isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');
		started = 1;
	}
		else if (started)
		{
			break;
	}
	}
	return (result * sign);
}
