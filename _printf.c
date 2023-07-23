#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A replica of the printf function
 * va_list: a variadic function
 * va_start: a start for the varidic function
 * args: va_list name
 * format: first arguement name
 * return: if true 0 else error
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++
			switch (*format)
			{
				case 1 'c'
				{
					char num = va_arg(args, char);
					printf("%c", n);
				}
				case 2 's'
				{
					char str = va_arg(args, char);
					printf("%s", str);
					break;
				}

			}
		}
	}
	va_list(args);

	return (0);
}
