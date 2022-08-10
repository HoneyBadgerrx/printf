#include "main.h"
/**
 * print_bin - prints bin
 * @vv: valist
 * Return: count of char printed
 */
int print_bin(va_list vv)
{
	char o = '0', l = '1';
	unsigned int i = va_arg(vv, unsigned int);

	if (i == 0)
	{
		write(1, &o, 1);
		return (1);
	}
	if (i == 1)
	{
		write(1, &l, 1);
		return (1);
	}
	return (binary(i));
}
