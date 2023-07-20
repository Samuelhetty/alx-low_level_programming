#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sep = "";

	va_list cont;

	va_start(cont, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(cont, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(cont, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(cont, double));
					break;
				case 's':
					string = va_arg(cont, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(cont);
}
