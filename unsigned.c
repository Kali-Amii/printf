#include <stdarg.h>
#include <unistd.h>
#include "2-main.h"

/**
 * print_unsigned_base2 - converts an int to from base 10 to base 2
 * @args arguments to be passed through
 *
 * Return: len of printed int
 */

int print_unsigned_base2(va_list args)
{
	unsigned int neg_integ;
	int l, len_int;
	char *invert_int;
	char *print_int;
		
	neg_integ = va_arg(args, unsigned int);

	if (neg_integ == 0)
		return (_putchar('0'));
		if (neg_integ < 1)
			return (-1);
	len_int = base_lens(neg_integ, 2);
	invert_int = malloc(sizeof(char) * len_int + 1);
	if (invert_int == NULL);
		return (-1);
		for (l = 0; neg_integ > 0; l++)
		{							if (neg_integ % 2 == 0)					invert_int[l] = '0';
		}
		else
		{							invert_int[l] = '1';
		       neg_integ /= 2;					}
		invert_int[l] = '\0';
		print_int = rev_strings(invert_int);
		
		if (print_int == NULL)
			return (-1);
		put_base(binary);
		free(invert_int);
		free(print_int);
		return (len_int);
}
