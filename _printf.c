#include "main.h"
/*
 * _printf - print function
 * print_char - print char
 * print_string - print string
 * print_percent - print percent
 *
 * return: count char
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list value;

	va_start(value, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == '%')
			{
				putchar('%');
				count++;
			}
			else if (*format == 'c')
			{
				int ch = va_arg(value, int);

				putchar(ch);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(value, char *);

				while (*str != '\0')
				{
					putchar(*str);
					count++;
					str++;
				}
			}
		}
		else
		{
		putchar(*format);
		count++;
		format++;
		}
}
va_end(value);
return (count);
}
