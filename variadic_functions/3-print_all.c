#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Print values based on the given format
 * @format: A list of types of arguments passed to the function
 *           'c' for char, 'i' for integer, 'f' for float, 's' for string
 *           Any other character should be ignored
 *           If the string is NULL, print (nil) instead
 *
 * Description: This function prints the values based on the format
 *              specified and separated by a comma and space.
 *              It handles different types of data based on the format
 *              provided and prints them accordingly.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				j = 1;
				break;
		}

		separator = ", ";
		if (format[i + 1] != '\0' && j == 0)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
