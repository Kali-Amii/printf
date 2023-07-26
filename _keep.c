#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A replica of the printf function that outputs a char and string
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
			format++;
			switch (*format)
			{
				case 'c':
				{
					char num = va_arg(args, int);
					_putchar(num);
					break;
				}
				case 's':
				{
					char* str = va_arg(args, char*);
					if (str != NULL)
					{
						while (*str)
						{
							_putchar(*str);
							str++;
						}
					}
					break;
				}
				default:
				{
					char per = va_arg(args, int);
					_putchar(per);
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
		}
	}
	va_end(args);

	return (0);
}

/**
 *  _printf_int - A replica of the printf function that outputs an integer
 * va_list: a variadic function
 * va_start: a start for the varidic function
 * args: va_list name
 * format: first argument name
 * return: if true 0 else error
 */

int _printf_int(const char *format, ...)
{
        va_list args;
        va_start(args, format);

        while (*format)
        {
                if (*format == '%')
                {
                        format++;
                        switch (*format)
                        {
				case 'd':
                                {
                                        int num = va_arg(args, int);
                                        printf("%d", num);
                                        break;
                                }
				case 'i':
                                {
                                        int numint = va_arg(args, int);
                                        printf("%i", numint);
                                        break;
                                }
				case '%':
                                {
                                        int per = va_arg(args, int);
                                        printf("%%", per);
                                        break;
                                }
                                default:
                                {
                                        break;
                                }
                        }
                }
                else
                {
                        printf("%c", *format);
                }
        }
        va_end(args);

        return (0);
}

