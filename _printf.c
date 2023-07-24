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
			format++
			switch (*format)
			{
				case 1 'c'			{
					char num = va_arg(args, char);
					printf("%c", n);
				}
				case 2 's'
				{
					char str = va_arg(args, char*);
					if (str != NULL)
					{
						while (*str);
						printf("%s", str);
						break;
					}
				}
				case 3 '%'
				{
					char per = va_arg(args, '%');
					printf("%%", NULL);
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
			printf("%");
		}
	}
	va_list(args);

	return (0);
}

/**
 *  _printf-int - A replica of the printf function that outputs an integer
 * va_list: a variadic function
 * va_start: a start for the varidic function
 * args: va_list name
 * format: first argument name
 * return: if true 0 else error
 */

int _printf-int(const int *format, ...)
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
                                case 1 'd'
                                {
                                        int num = va_arg(args, int);
                                        printf("%d", int);
                                        break;
                                }
                                case 2 'i'
                                {
                                        int numint = va_arg(args, int);
                                        printf("%i", int);
                                        break;
                                }
                                case 3 '%'
                                {
                                        int per = va_arg(args, int);
                                        printf("%%", NULL);
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
                        printf("%");
                }
        }
        va_list(args);

        return (0);
}

