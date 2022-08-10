#include "main.h"
/**
 * print_bin - prints bin
 * @vv: valist
 * Return: count of char printed
 */
int print_bin(va_list vv)
{
	char c = '0';
	unsigned int i = va_arg(vv, unsigned int);

	if (i == 0)
	{
		write(1, &c, 1);
		return (1);
	}
	return (binary(i));
}
