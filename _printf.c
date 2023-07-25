#include "main.h"
/*
 * _printf - print function
 *
 * return: count char
 */
int _printf(const char *format, ...)
{
	int i, s_num,  count = 0;
	va_list value;

	va_start(value, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putcar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putcar(va_arg(value, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s_num = puss(va_arg(value, char *));
			i++;
			count += (s_num - 1);
		}
		else if (format[i + 1] == '%')
		{
			putcar('%');
		}
		count++;
	}
	va_end(value);
	return (count);
}
