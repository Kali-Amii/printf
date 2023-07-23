#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A replica of the printf function
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
				case 1 'd'
				{
				}
			}
		}
	}
	return (0);
}
