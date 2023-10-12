#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#define is_fmt(c) (c == 'c' || c == 'i' || c == 's' || c == 'f')

/**
 * print_all - prints any argument passed to it
 * @format: the format in which arguments occur
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *tmp_fmt;

	va_start(args, format);

	tmp_fmt = (char *)format;

	while (tmp_fmt && *tmp_fmt != '\0')
	{
		switch (*tmp_fmt)
		{
		case 'c':
			putchar(va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			++tmp_fmt;
			continue;
		}
		if (is_fmt(*tmp_fmt) && *(tmp_fmt + 1) != '\0')
			printf(", ");

		++tmp_fmt;
	}

	putchar('\n');
	va_end(args);
}
