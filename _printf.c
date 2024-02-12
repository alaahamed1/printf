#include "main.h"
#include <stdio.h>
#include <errno.h>

/**
 * _printf - Custom Printf Function
 * @format: string formated
 * Return: 0 on success or -1 on Error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int len = 0;
	char test;

	va_start(args, format);
	if (format == NULL)
	{
		errno = EINVAL;
        return -1;
	}

	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			test = format[++i];
			if (test == 'c')
			{
				len += _putchar(va_arg(args, int));
			}
			else if (test == 's')
			{
				len += _put(va_arg(args, char *));
			}
			else if (test == '%')
			{
				len += _putchar('%');
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
	}

	va_end(args);
	return (len);
}
