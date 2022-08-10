#include "main.h"
/**
 * _printf - works like printf
 * @format: string to be printed including format specifiers
 * Return: number of char printed
 */
int _printf(const char *format, ...)
{
	char c;
	int i = 0, count = 0;
	int (*f)(va_list);
	va_list vv;

	va_start(vv, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			f = get_func(format[i + 1]);
			count = count + f(vv);
			i = i + 2;
			continue;
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			c = '%';
			write(1, &c, 1);
			++count;
			i += 2;
			continue;
		}
		c = format[i];
		write(1, &c, 1);
		++count;
		++i;
	}
	va_end(vv);
	return (count);
}
